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
    for(int i = 2016; i <= 2100; i++) {
        if (digit_sum(i)==test) {
            printf("%d", i);
            break; } }
    return 0; }