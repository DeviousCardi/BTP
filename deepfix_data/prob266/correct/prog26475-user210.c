#include <stdio.h>
int main(){
    int n,r;
    int sum=0;
    int temp,rem;
    scanf("%d",&n);
    int i=n;
    while(temp!=0) {
        temp=n;
        rem=temp%10;
        temp=temp/100;
        sum=sum+rem; }
    while(r!=0) {
        r=i%sum;
        i++; }
 printf("%d",i);
    return 0; }