#include <stdio.h>
int main() {
    int n;
    int num[n];
    int money;
    int i;
    int max;
    int min;
    int count;
    count=0;
    for(i=0;i<=n-1;i++)
    {  scanf("%d",&money);
    num[i]=money;
    count=count+1; }
    while(count==n)
    { for(i=1,max= num[0],min=num[0];i<=n-1;i++)
    { if(max>num[i]||min <num[i]) {
       max=num[0];
    min=num[0]; }
    else{
    max=num[i];
    min=num[i]; } }
    int m;
    m=max;
    max=min;
    min=max;
    for(i=0;i<=n-1;i++)
    { printf("%d",num[i]);
     printf("end"); }
    return 0; } }