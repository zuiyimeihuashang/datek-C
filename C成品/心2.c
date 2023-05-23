#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<math.h>
#include<sys/timeb.h>
 
struct MyLove
{
    int NUMS;  //  ���
    double m;
    double n;
    double size;
    bool Is_show;
    int x;
    int y;
};
 
MyLove mylove[400];
int CenterX = 320;
int CenterY = 180;
double Size = 60;
void initdata();  // ��ʼ������
void updata();    // ����
void movedata();  // ƽ��
void showdata();  // ��ʾ
int* GetRand(int* buf, int count, int range);  // �����������
void heart(int x0, int y0, int size, COLORREF C);
void HpSleep(int ms);
 
int main()
{
    initgraph(640, 480);
    initdata();
    BeginBatchDraw();
    while (true)
    {
        updata();
        showdata();
        HpSleep(30);    // ��Ϊ��ȷ��ʱ
        FlushBatchDraw();
        cleardevice();
    }
    EndBatchDraw();
    _getch();
    return 0;
}
 
void updata()
{
    int* buf = (int*)malloc(sizeof(int) * 20);
    buf = GetRand(buf, 20, (int)(2 * Size / 0.01));
    movedata();
    for (int i = 0; i < 20; i++)
    {
        mylove[i].m = buf[i] * 0.01;
        mylove[i].n = (((sin(buf[(int)i] * 0.01) * sqrt(fabs(cos(buf[(int)i] * 0.01)))) / (sin(buf[(int)i] * 0.01) + 1.4142)) - 2 * sin(buf[(int)i] * 0.01) + 2);
        mylove[i].size = Size;
        mylove[i].NUMS = i / 20;
        mylove[i].Is_show = true;
        mylove[i].x = (int)(-Size * mylove[i].n * cos(mylove[i].m) + CenterX);
        mylove[i].y = (int)(-Size * mylove[i].n * sin(mylove[i].m) + CenterY - mylove[i].size);
    }
    for (int i = 20; i < 400; i++)
    {
        mylove[i].size = mylove[i].size + 1;
        if (mylove[i].size > 80)
        {
            mylove[i].size = 80;
        }
        mylove[i].NUMS = i / 20;
        mylove[i].x = (int)(-mylove[i].size * mylove[i].n * cos(mylove[i].m) + CenterX);
        mylove[i].y = (int)(-mylove[i].size * mylove[i].n * sin(mylove[i].m) + CenterY - mylove[i].size);
    }
}
 
void movedata()
{
    for (int i = 399; i > 19; i--)
    {
        mylove[i] = mylove[i - 20];
    }
}
 
void showdata()
{
    settextcolor(RED);
    wchar_t c = 0x59;    // 0x28 �ǵ绰���� Wingdings �����еĶ�Ӧ����
    for (int i = 0; i < 400; i++)
    {
        settextstyle(mylove[i].NUMS + 10, 0, "Webdings");
        setbkmode(TRANSPARENT);
        outtextxy(mylove[i].x + 20, mylove[i].y + 20, c);
    }
}
 
int* GetRand(int* buf, int count, int range)
{
    struct timeb timeSeed;
    ftime(&timeSeed);
    srand(timeSeed.time * 1000 + timeSeed.millitm);  // milli time
    for (int i = 0; i < count; i++)
    {
        int randTmp = rand() % range;
        for (int j = 0; j < i; j++)
        {
            if (buf[j] == randTmp)
            {
                break;//����ظ���
            }
        }
        buf[i] = randTmp;
    }
    return buf;
}
 
void initdata()
{
    for (int i = 0; i < 400; i++)
    {
        mylove[i].NUMS = 0;
        mylove[i].m = 0;
        mylove[i].n = 0;
        mylove[i].size = 0;
        mylove[i].Is_show = false;
        mylove[i].x = 0;
        mylove[i].y = 0;
    }
}
 
// ��ȷ��ʱ����(���Ծ�ȷ�� 1ms������ ��1ms)
// by yangw80<yw80@qq.com>, 2011-5-4
void HpSleep(int ms)
{
    static clock_t oldclock = clock();    // ��̬��������¼��һ�� tick
    oldclock += ms * CLOCKS_PER_SEC / 1000;  // ���� tick
    if (clock() > oldclock)          // ����Ѿ���ʱ��������ʱ
        oldclock = clock();
    else
        while (clock() < oldclock)      // ��ʱ
            Sleep(1);            // �ͷ� CPU ����Ȩ������ CPU ռ���ʣ����� 10~16ms
          //      Sleep(0);            // ���߾��ȡ����� CPU ռ���ʣ����� 1ms
}
 
