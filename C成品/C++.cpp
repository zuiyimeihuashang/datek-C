#include<cstdio>
#include<iostream>
using namespace std;
#include<cstring>
//���ϲ�����
int L,M;
//����������ԭ����ͬ
int cnt=0;
//ʣ��������Ŀ
int vis[10000+10];
//�����ж���ľ��û�б����ʹ�
int main()
{
    memset(vis,0,sizeof(vis));//��ʼ��������
    cin>>L>>M;//��׼���룬������
    for(int i=0;i<=L;i++)
        vis[i]=0;//��0�������ʼ��������·�����е������Ϊδ���ʹ�
    for(int i=1;i<=M;i++)
    {
        int head,tail;//���������ͷ��β
        cin>>head>>tail;
        for(int j=head;j<=tail;j++)
            if(vis[j]==0)
                vis[j]=1;//����������ͷ��β��ʼ�������������ڵ������Ϊ���ʹ�
    }
    for(int i=0;i<=L;i++)
    {
        if(vis[i]==0)
            cnt++;//����δ�����ʹ���������Ŀ
    }
    cout<<cnt<<endl;
    return 0;
} 
