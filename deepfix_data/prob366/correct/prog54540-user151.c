#include <stdio.h>
int main() {
    int x,y,z=0,p[1000],i,c=0;
    scanf("%d",&x);
    for(i=0;i<2*x;i++)
    scanf("%d",&p[i]);
    for(i=0;i<x;i++) {
     for(y=0;y<2*x&&y!=i;y++) {
         if(p[i]==p[y])
         {z=y-i;
         c++;} } }
   printf("%d %d",z,c);
    return 0; }