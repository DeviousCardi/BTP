#include <stdio.h>
int main() {
    int x,y,z,p[1000],i;
    scanf("%d",&x);
    for(i=0;i<2*x;i++)
    scanf("%d",&p[i]);
    for(i=0;i<x;i++) {
     for(y=0;y<2*x&&y!=i;y++) {
         if(p[i]==p[y])
         z=y-i; } }
   printf("%d",z);
    return 0; }