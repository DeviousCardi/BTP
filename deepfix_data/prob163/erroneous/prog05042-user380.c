#include <stdio.h>
#include <stdlib.h>
int main() {
int s1,s2,a,b,i,j,k,l;
    scanf("%d\n%d\n",&s1,&s2);
    int a[500];
    int b[500];
    for(i=0;i<500-s1;i++)
        a[i]=0;
    for(i=500-s1;i<500;i++)
        scanf("%d",&a[i]);
    for(j=0;j<500-s2;j++)
        b[j]=0;
    for(j=5)
        scanf("%d",&b[i]);
    int sum[501];
    for(l=0;l<501;l++)
    sum[l]=0;
    for(k=500;k>=0;k--) {
        sum[k]=sum[k]+a[k]+b[k];
        if(sum[k]>10)
        sum[k+1]=sum[k+1]+1; }
	return 0; }