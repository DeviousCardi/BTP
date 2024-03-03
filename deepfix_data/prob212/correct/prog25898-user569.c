#include <stdio.h>
int digsum(int a) {
    int sum;
    sum = 0;
    while (a>0) {
        sum=sum+a%10;
        a=a/10; }
    return sum; }
int main() {
    int year,birth;
    scanf("%d",&birth);
    year = 2016;
    birth = digsum(birth);
    while((year%birth)!=0) {
        year++; }
    printf("%d",year);
    return 0; }