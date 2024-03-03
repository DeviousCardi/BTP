#include <stdio.h>
int main(){
    int n,r;
    int sum=0;
    int temp,rem;
    scanf("%d",&n);
    int i=2016;
    temp=n;
    while(temp!=0) {
        rem=temp%10;
    sum=sum+rem;
        temp=temp/10; }
    r=2016%sum;
    while(r!=0) {
        r=i%sum;
        i++; }
 printf("%d",i);
    return 0; }