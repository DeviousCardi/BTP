#include <stdio.h>
int main(){
    int n,i,j,a,sum;
    sum=0;
    j=1;
    scanf("%d",n);
    temp=n;
    while(temp!=0) {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10; }
    i=n+1;
    while(j==1) {
        if((i%sum)==0) {
            printf("%d",i);
            j=2; }
        i++; }
    return 0; }