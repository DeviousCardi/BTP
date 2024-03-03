#include <stdio.h>
#include <stdlib.h>
int f[1000000];
long g(int x) {
    if(x<=0)return 0;
    if(x==1)return 1;
    return g(x-1)+g(x-3)+g(x-5); }
int main() {
 for(int i=0;i<1000000;i++)
 f[i]=-1;
 int x;
 scanf("%d",&x);
 int p=g(x);
 printf("%d",p);
    return 0; }