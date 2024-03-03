#include <stdio.h>
int main(){
    int n,m,sum,i,digit;
    scanf("%d",&n);
    sum=0;
    m=n;
    while(m>0){
        digit=m%10;
        sum=sum+digit;
        m=m/10; }
    for(i=n;i%sum!==0;i++) continue;
    printf("%d",i);
    return 0; }