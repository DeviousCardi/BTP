#include <stdio.h>
int main() {
    int i,n,mon[1000];
    int a=0,b=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d ",&mon[i]);
    int max=mon[0];
    int min=mon[0];
    for(i=0;i<n;i++) {
    if(max>mon[i])
    {max=mon[i];
     a=i; }
    if(min<mon[i])
    {min=mon[i];
     b=i; } }
    mon[a]=min;
    mon[b]=max;
    for(i=0;i<n;i++)
    printf("%d",mon[i]);
    printf("end");
    return 0; }