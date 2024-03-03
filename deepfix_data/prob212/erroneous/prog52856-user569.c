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
    if(year%digsum(birth)==0) printf("%d",year)
    while(year%digsum(birth)!=0) {
        year++;
        if(year%digsum(birth)==0) printf("%d",year); }
    return 0; }