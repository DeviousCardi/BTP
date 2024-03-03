#include <stdio.h>
int main() {
    int n,count=0,i,j;
    scanf("%d",&n);
    int h[n+1];
    for(i=0;i<n;i++)
    scanf("%d",&h[i]);
    for(j=1;j<n-1;j++)
    {   while(h[j]>h[j+1]&&h[j]>h[j-1])
         {  count=count+1; } }
    printf("%d",count);
    return 0; }