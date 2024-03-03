#include <stdio.h>
int main() {
    int year,sum,cal,digit;
    scanf("%d",&year);
    sum=0;
    for(cal=year;cal!=0;cal=cal/10) {
        digit=cal%10;
        sum=sum+digit; }
    int i;
    for(i=2016;;i++) {
        if(i%sum==0) {
        printf("%d",i);
        break; } }
    return 0; }