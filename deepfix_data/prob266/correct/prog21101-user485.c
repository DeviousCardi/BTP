#include <stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    while(n) {
        sum=sum+n%10;
        n=n/10; }
    for(i=0;i<=sum;i++) {
           if(((i+2016)%sum)==0) {
           printf("%d",i+2016);
           break; } }
    return 0; }