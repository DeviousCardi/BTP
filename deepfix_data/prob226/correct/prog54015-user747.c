#include <stdio.h>
int main() {
	    int a[50],b[50];
	    int i=0,j=0,l=0,k=0,N=0,d=0,f=0;
        static int sum=0,nsum;
	    scanf("%d %d\n",&d,&N);
	    for(i=0;i<d;i++){
	        scanf("%d ",&b[i]); }
	    if(N>=0 && N<d){
	        for(j=0;j<=N;j++){
	            a[j]=b[j]; }
	        printf("%d",a[N]); }
	    else{
	        while(f<d){
	            a[f]=b[f];
	            sum=sum+a[f];
	            f++; }
	    for(k=d;k<=N;k++){
	        printf("%d\n",nsum);
	        a[k]=nsum;
	        nsum=nsum+a[k]; }
	    printf("%d",nsum); }
	return 0; }