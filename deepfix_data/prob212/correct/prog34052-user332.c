#include <stdio.h>
int main() {
    int year,sum,count,digit;
    scanf("%d",&year);
    sum=0;
    for(count=year;count!=0;count=count/10) {
        digit=count%10;
        sum=sum+digit; }
    int i;
    for(i=2016;;i++) {
        if(i%sum==0) {
        printf("%d",i); } }
    return 0; }