#include <stdio.h>
int main() {
    int i,n,m,value,sum1,sum2;
    sum1=0;
    sum2=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=100;i=i+1) {
        scanf("%d",&value);
        if(i>m)
        {break;} }
        sum1=sum1+value;
     for(i=m;i<=100;i=i+1) {
        scanf("%d",&value);
     if(i>(m+m))
     {break;} }
     sum2=sum2+value;
    if(sum1>sum2)
    {printf("%d",sum1);}
    else{printf("%d",sum2);}
    return 0; }