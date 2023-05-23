#include <stdio.h>

main()
{
	int n=0,MAX,i,main,j,cnt=1,k;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]); //printf("%d",a[i]);
		b[i]=0;
	}
//5 1 2 3 4 5 
//10 20 40 32 67 40 20 89 300 400 15 ||8 15 20 32 40 67 89 300 400
	for(i=1,MAX=a[0];i<n;i++){
		if(MAX>a[i]){
			MAX=MAX;
		}else{MAX=a[i];
		}
	} //printf("%d",MAX); 
	for(j=0;b[j]!=MAX;j++){
			for(i=1,main=a[0];i<n;i++){
				if(main<a[i]){
					main=main;
				}else { 
					main=a[i];
			}
	} 
		b[j]=main;
		for(k=0;k<n;k++){
			if(a[k]==main){
				a[k]=MAX;
			}
		}
		
	}	
	for(j=0;b[j]!=MAX;j++){
		cnt++;
		}
	printf("%d\n",cnt);
	for(i=0;b[i]!=MAX;i++){
		printf("%d ",b[i]);
	}
	printf("%d",MAX);
	
	return 0;
}
 
