#include <stdio.h>
int main(){
    int n,i,j,a,sum,temp,rem;
    sum=0;
    j=1;
    rem=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0) {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10; }
    i=2016;
    while(j==1) {
        if((i%sum)==0) {
            printf("%d",i);
            j=2; }
        i++; }
    return 0; }