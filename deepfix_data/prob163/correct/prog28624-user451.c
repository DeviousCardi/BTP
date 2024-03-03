#include <stdio.h>
#include <stdlib.h>
int main() {
    int  a[1000];
    int  b[1000];
    int x,y,i,sum,k,j;
    scanf("%d %d", &x, &y);
    for(i=0;i<x;i++)
    scanf("%d", &a[i]);
    sum= sum+a[i]*10;
    for(j=0;j<y;j++)
    scanf("%d", &b[j]);
    k=k+b[j]*10;
printf("%d",(sum+k));
	return 0; }