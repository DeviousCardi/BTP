#include <stdio.h>
int main() {
    int i,j,n,m,value1,value2,sum1,sum2;
    sum1=0;
    sum2=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=100;i=i+1) {
        scanf("%d",&value1);
        if(i>m)
        {break;} }
        sum1=sum1+value1;
     for(j=m;j<=100;j=j+1) {
        scanf("%d",&value2);
     if(j>m)
     {break;} }
     sum2=sum2+value2;
    if(sum1>sum2)
    {printf("%d",sum1);}
    else{printf("%d",sum2);}
    return 0; }