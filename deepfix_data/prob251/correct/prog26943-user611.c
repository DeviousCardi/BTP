#include <stdio.h>
#include <stdlib.h>
long f[1000000];
long g(int x) {
    if(x<0) return 0;
    if(f[x]!=-1)
    return f[x];
    if(f[x]==-1) {
        f[x]=g(x-1)+g(x-3)+g(x-5);
        return f[x]; } }
int main() {
 f[0]=0;
 f[1]=1;
 f[2]=1;
 f[3]=2;
 f[4]=2;
 f[5]=3;
 for(int i=6;i<1000000;i++)
 f[i]=-1;
 int x;
 scanf("%d",&x);
 long p=g(x);
 printf("%ld",p);
    return 0; }