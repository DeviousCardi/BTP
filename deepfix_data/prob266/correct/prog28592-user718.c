#include <stdio.h>
int digit_sum(int num) {
    int rem, sum;
    while(num != 0) {
        rem = num % 10;
        sum = sum + rem;
        num = num/10; }
    return sum; }
int main() {
    int num, test;
    scanf("%d", &num);
    test = digit_sum(num);
    printf("%d\n", test);
    int i = 2016;
    printf("%d",i);
    return 0; }