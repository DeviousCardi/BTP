#include <stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    while(n) {
        sum=sum+n%10;
        n=n/10; }
    for(i=0;i<sum;i++) {
           if(((sum+2016)%10)==0) {
           printf("%d",sum+2016);
           break; } }
    return 0; }