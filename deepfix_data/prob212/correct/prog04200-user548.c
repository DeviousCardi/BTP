#include <stdio.h>
int main(){
    int n,i,j,rem,sum,out,q;
    scanf("%d",&n);
    sum=0;
    while(n>0) {
        rem=n%10;
        sum = sum + rem;
        n=n/10; }
    if(2016%sum==0) {
        out=2016; }
    else {
        q=2016/sum;
        out = (q+1)*sum; }
    printf("%d",out);
    return 0; }