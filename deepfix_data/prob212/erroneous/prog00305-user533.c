#include <stdio.h>
int main(){
    int y=2016;int sum=0;
    int n,int rem;
    while(n!=0) {
        rem=n%10;
        n=n/10;
        sum=sum+rem; }
    while(y%sum!=0)
        y=y+1;
    printf("%d",y);
    return 0; }