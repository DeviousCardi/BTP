#include <stdio.h>
int main() {
	    int a[50],b[50];
	    int i=0,j=0,l=0,k=0,N=0,d=0,f=0;
        static int sum=0;
	    scanf("%d %d\n",&d,&N);
	    for(i=0;i<d;i++){
	        scanf("%d ",&b[i]);
	        for(j=0;j<d;j++){
	            a[j]=b[j]; }
	    if(N>=d){
	    for(k=d;k<=N;k++){
	        sum=0;
	       for(l=k-d;l<k;l++){
	         sum=sum+a[l]; }
	       a[k]=sum; }
	    printf("%d",a[N]); }
	   else
	   printf("%d",a[N]); }
	return 0; }