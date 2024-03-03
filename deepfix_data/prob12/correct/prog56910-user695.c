#include <stdio.h>
int main() {
    int i,p,d[1000],minimum,distance[1000],k;
    scanf("%d\n",&p);
    for(i=0,k=2*p;i<2*p,k>=0;i++,k--)
   { scanf("%d",&d[i]);
    if(d[i]==d[i+k]);
    distance[i]=d[i+k]-d[i];
    minimum=distance[0];
    if(distance[i]<distance[0]) {
       minimum=distance[i];
        printf("%d",minimum); break; } }
       return 0; }