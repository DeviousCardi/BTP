#include <stdio.h>
int main() {
	    int a[31],b[21];
	    int i,j,k=0,sum=0,N=0,d=0;
	    scanf("%d %d\n",&d,&N);
	    for(i=0;i<d;i++){
	        scanf("%d ",&b[i]); }
	    if(N>=0 && N<d){
	        j=0;
	        for(j=0;j<N;j++){
	            a[j]=b[j]; } }
	    else
	    for(k=N-d;k<N;k++){
	        a[k]=a[k]+b[d-1]; }
	    a[N]=sum;
	    printf("%d\n",a[N]);
	return 0; }