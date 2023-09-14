typedef int DateType;

typedef struct seqlist {
	int n;
	int MAXNUM;
	DateType *element;
} seqlist;
void sort_list(seqlist * listp){
	int i,j;
	for(i=0;i<listp->n;i++){
		for(j=0;j<listp->n-i-1;j++){
			if(listp->element[j] > listp->element[j+1]){
				int swap = listp->element[j];
				listp->element[j]=listp->element[j+1];
				listp->element[j+1]=swap; 
			}
			
		}
	}
}
