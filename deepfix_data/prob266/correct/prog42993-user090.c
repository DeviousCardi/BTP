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
    while(ly>=2016)
    {if(ly%sum==0)
    {printf("%d",sum);
     break;} }
    return 0; }