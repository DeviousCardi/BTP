#include <stdio.h>
int digsum(int a) {
    int sum;
    while (a>0) {
        sum+=a%10;
        a/=10; }
    return sum; }
int main() {
    int year,birth;
    scanf("%d",&birth);
    year = 2016;
    birth = digsum(birth);
    printf("%d",digsum(birth));
    return 0; }