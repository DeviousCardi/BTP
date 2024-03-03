#include <stdio.h>
int main(){
 int n,m=0,d=0,i=2015;
scanf("%d",&n);
while(n>0) {
    d=d+n%10;
    n=n/10; }
while(m!=1)
{i++;
    if(i%d==0)
    m=1; }
printf("%d",i);
    return 0; }