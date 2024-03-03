#include <stdio.h>
int main() {
    int i,n,m,value1,sum1,sum2;
    sum1=0;
    sum2=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=100;i=i+1) {
        scanf("%d",&value1);
        if(i>m)
        {break;} }
        sum1=sum1+value1;
   if(sum2>sum1) {
       sum2=sum1;
       printf("%d",sum2); }
   else
   {printf("%d",sum1);}
    return 0; }