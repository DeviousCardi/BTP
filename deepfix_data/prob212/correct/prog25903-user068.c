#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int p=n,t,s=0,flag=0;
    while(p>0) {
        t=p%10;
        s=s+t;
        p=p/10; }
    n=2016;
    while(flag==0) {
        if(n%s==0)
        flag=1;
        n++; }
 printf("%d",n-1);
    return 0; }