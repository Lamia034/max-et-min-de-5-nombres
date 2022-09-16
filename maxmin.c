#include<stdio.h>
void tri_bull(int t[],int n){
	int tmp,i=0,j;
	while(i<n){
		for(j=i+1;j<n;j++){
			if(t[j]<t[i]){
				tmp=t[j];
				t[j]=t[i];
				t[i]=tmp;
			}
		
		}
		i++;
}
}
int main(){
	int n=5,t[n],i,sMax=0,sMin=0;
	for(i=0;i<5;i++){
		printf("entrer t[%d]:",i);
		scanf("%d",&t[i]);
	}
	tri_bull(t,n);
	for(i=0;i<4;i++){
		sMin += t[i];
	}
	for(i=1;i<5;i++){
		sMax += t[i];
	}
	printf("le nombre max est : %d \nle nombre min est:%d",sMax,sMin);
}
