#include <stdio.h>
int main(){
    int n,y,sum,i,digit;
    scanf("%d",&n);
    sum=0;
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10; }
    for(i=n;i%sum!=0;i++) continue;
    printf("%d",i);
    return 0; }