#include <stdio.h>
int main() {
int d,n,i,a[31],b[d],sum=0,count=0,j;
scanf("%d %d\n",&d,&n);
for(i=0;i<d;i++){
    scanf("%d ",&b[i]); }
 for(i=0;i<d;i++){
     a[i]=b[i];
     sum=sum+a[i]; }
 if(n=<d){
     for(i=0;i<=n;i++){
         count=count+a[i]; }
     printf("%d",count);
     exit(0); }
 a[d]=sum;
 for(i=d;i<n+1;i++){
     for(j=0;j<i;j++){
         count=count+a[j]; }
     a[i]=count;}
     printf("%d",a[n+1]);
	return 0; }