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
     for(i=1,max= num[0],min=num[0];i<=n-1;i++)
    { if(num[i]< num[0]) {
       max=num[0];
    } else{
         if(num[i]<num[0]){
             min=num[i];
         }else{
             min=num[0];
             max=num[i]; } } }
    int m;
    m=max;
    max=min;
    min=max;
    for(i=0;i<=n-1;i++)
    { printf("%d",num[i]);
     printf("end"); }
    return 0; }