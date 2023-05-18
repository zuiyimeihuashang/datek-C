#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d\n",&N);
    int i,j,a[N];
    for(i=0;i<N;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1-i;j++){
            if(a[j]>a[j+1]){
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
            
        }
    }
    
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(a[i]==a[j]){
            for(int k=j;k<N-1;k++){
                a[k]=a[k+1];
            }
            N--;
            j--;
           }
        }
    }
    printf("%d\n",N);
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
