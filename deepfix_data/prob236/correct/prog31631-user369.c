#include <stdio.h>
int main()
{   int n,o,t;
    scanf("%d",&n);
    int b1[n];
    int b2[n];
    for(int i=0;i<n;i++)
    scanf("%d",&b1[i]);
    for(int i=0;i<n;i++) {
       scanf("%d",&o);
       b2[i]=b1[o];
       printf("%d ",b2[i]); }
    for(int i=0;i<n;i++)
    printf("%d ",b2[i]);
    printf("end");
    return 0; }