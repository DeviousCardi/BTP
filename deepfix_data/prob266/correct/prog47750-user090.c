#include <stdio.h>
int main(){
    int n,a,ly,b;
    scanf("%d",&n);
    b=n;
    int sum=0;
    while(n>0)
    {a=n%10;
     n=n/10;
     sum=sum+a;}
    for(ly=2016;ly<=3000;ly++)
    {if(ly%sum==0)
    {printf("%d",ly);
     break; } }
    return 0; }