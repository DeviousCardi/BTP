#include <stdio.h>
#include <stdlib.h>
int main() {
 long f[1000];
 f[0]=0;
 f[1]=1;
 f[2]=1;
 f[3]=2;
 f[4]=2;
 f[5]=3;
 int x;
 scanf("%d",&x);
 for(int i=6;i<=x;i++)
 f[i]=f[i-1]+f[i-3]+f[i-5];
 printf("%ld",f[x]);
    return 0; }