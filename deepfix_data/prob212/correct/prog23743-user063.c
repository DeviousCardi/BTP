#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum_of_digits=0;
    while(n) {
        sum_of_digits+=(n%10);
        n=n/10; }
    int lucky_year=2016;
    while(lucky_year%sum_of_digits!=0)
        lucky_year++;
    printf("%d", lucky_year);
    return 0; }