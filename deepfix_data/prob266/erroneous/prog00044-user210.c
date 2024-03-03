#include <stdio.h>
int main(){
    int n,r;
    int sum=0;
    int temp,rem;
    scanf("%d",&n);
    int i=n;
    temp=n;
    while(temp!=0) {
        rem=temp%10;
        temp=temp/10;
        sum=sum+rem; }
    r=n%sum;
    while(r!=0) {
        r=i%sum;
        i++; }
 printf("%d",i-1)
    return 0; }