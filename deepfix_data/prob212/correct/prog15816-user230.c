#include <stdio.h>
int main(){
    int brth_yr;
    scanf("%d",&brth_yr);
    int sum=0;
    int b,c;
    b=brth_yr;
    while(b!=0) {
        sum=sum+b%10;
        b=b/10; }
    c=2016%sum;
    c=sum-c;
    printf("%d",2016+c);
    return 0; }