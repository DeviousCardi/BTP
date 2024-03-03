#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int num[n];
    int money;
    int i;
    int max;
    int min;
    for(i=0;i<=n-1;i++)
    {  scanf("%d",&money);
    num[i]=money; }
    for(i=1,max=0,min=0;i<=n-1;i++) {
        if(num[i]> num[max])
            max=i;
       else if(num[i]<num[min])
             min=i; }
    int m;
    m=num[max];
    num[max]=num[min];
    num[min]=m;
    for(i=0;i<=n-1;i++)
    { printf("%d ",num[i]); }
     printf("end");
    return 0; }