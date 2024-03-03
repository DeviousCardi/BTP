#include <stdio.h>
#include<stdlib.h>
int sum(int*,int,int);
int main() {
    int d,N,*b,*a,i;
    scanf("%d%d",&d,&N);
    b=(int*)calloc(d,sizeof(int));
    for(i=0;i<d-1;i++) {
        scanf("%d",&b[i]); }
    a=(int*)calloc(N+1,sizeof(int));
    for(i=0;i<N+1;i++) {
        if(i<d)
        a[i]=b[i];
        else
        a[i]=sum(a,i,d); }
    printf("%d",a[N]);
	return 0; }
int sum(int a[],int n,int d) {
   int i,sum=0;
   for(i=1;i<=d;i++) {
       sum=sum+a[n-i]; }
   return sum; }