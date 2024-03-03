#include <stdio.h>
int main() {
	    int a[31],b[21];
	    int i,j,k,sum,N=0,d=0;
	    printf("%d ",b[k]);
	    scanf("%d %d\n",&d,&N);
	    for(i=0;i<d;i++){
	        scanf("%d ",&b[i]); }
	    if(N>=0 && N<d){
	        j=0;
	        for(j=0;j<N;j++){
	            a[j]=b[j]; } }
	    else
	    for(k=N-d;k<N;k++){
	        sum=sum+a[k]; }
	    a[N]=sum;
	    printf("%d\n",a[N]);
	return 0; }