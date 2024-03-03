#include <stdio.h>
int main() {
	    int a[50],b[50];
	    int i=0,j=0,l=0,k=0,N=0,d=0,f=0,sum=0;
	    scanf("%d %d\n",&d,&N);
	    for(i=0;i<d;i++){
	        scanf("%d ",&b[i]); }
	    if(N>=0 && N<d){
	        for(j=0;j<=N;j++){
	            a[j]=b[j]; }
	        printf("%d",a[N]); }
	    else{
	       for(l=0;l<d;l++){
	            a[l]=b[l]; }
	        while(f<d){
	            a[f]=b[f];
	            sum=sum+a[f];
	            f++; }
	    for(k=d;k<N;k++){
	        a[k]=sum;
	        sum=sum+a[k]; }
	    printf("%d",a[N]); } }
	return 0; }