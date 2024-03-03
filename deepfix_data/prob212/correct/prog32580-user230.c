#include <stdio.h>
int main(){
    int b;
    scanf("%d",&b);
    int sum=0;
    int c;
    while(b!=0) {
        sum=sum+b%10;
        b=b/10; }
    c=2016%sum;
    if(c!=0) {
            c=sum-c; }
    printf("%d",2016+c);
    return 0; }