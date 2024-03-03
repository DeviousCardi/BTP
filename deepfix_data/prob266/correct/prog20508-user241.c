#include <stdio.h>
int main(){
    int n,sum=0,r,temp;
    scanf("%d",&n);
    temp=2016;
    while(n!=0) {
        r=n%10;
        sum=sum+r;
        n=n/10; }
    while(1) {
        if(temp%sum==0) {
           printf("%d",temp);
           return 0; }
        temp++; }
    return 0; }