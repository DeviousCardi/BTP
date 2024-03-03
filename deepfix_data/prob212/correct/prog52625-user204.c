#include <stdio.h>
int main(){
    int n,a,b,c,d,i,sum;
    scanf("%d",&n);
    a=(n/1000);
    b=(n/100)-10*a;
    c=(n/10)-10*(n/100);
    d=n-10*(n/10);
   sum=a+b+c+d;
    for(i=2016;i++;);
    if((2016%sum)==0) printf("The closest lucky year for that person. ");
    return 0; }