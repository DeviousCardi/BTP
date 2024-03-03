#include <stdio.h>
int main(){int s,b,n;
    scanf("%d",&n);
    b=0;
while(n>0){
    s=s+n%10;
    n=n/10; }
        while(b>=2016){
            if(b%s==0){
                printf("%d",b); } }
    return 0; }