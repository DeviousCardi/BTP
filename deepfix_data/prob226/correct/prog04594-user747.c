#include <stdio.h>
int main() {
	    int a[31],b[21];
	    int i=0,j=0,l=0,k=0,sum=0,N=0,d=0;
	    scanf("%d %d\n",&d,&N);
	    for(i=0;i<d;i++){
	        scanf("%d ",&b[i]); }
	    if(N>=0 && N<d){
	        for(j=0;j<N;j++){
	            a[j]=b[j]; } }
	    else{
	        a[N-d]=b[d-1];
	    for(k=N-d;k<N;k++){
	        for(l=0;l<N;l++){
	            a[l]=b[l]; }
	        sum=sum+a[k]; } }
	    printf("%d\n",sum);
	return 0; }