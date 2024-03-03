#include <stdio.h>
int main()
{   int n,o,t;
    scanf("%d",&n);
    int b1[n];
    for(int i=0;i<n;i++)
    scanf("%d",&b1[i]);
    for(int i=0;i<n;i++) {
       scanf("%d",&o);
       if(i!=o) {
        t=b1[i];
        b1[i]=b1[o];
        b1[o]=t; } }
    for(int i=0;i<n;i++)
    printf("%d ",b1[i]);
    printf("end");
    return 0; }