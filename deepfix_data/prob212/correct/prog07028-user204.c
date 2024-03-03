#include <stdio.h>
int main(){
    int n,a,b,c,d,i,sum;
    scanf("%d",&n);
    a=(n/1000);
    b=(n/100)-10*a;
    c=(n/10)-10*(n/100);
    d=n-10*(n/10);
   sum=a+b+c+d;
    i=2016;
    while(2100>=i>=2016){
    if((i%sum)==0)
        printf("%d",i);}
    return 0; }