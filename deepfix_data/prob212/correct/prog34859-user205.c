#include <stdio.h>
int main() {
    int year, lucky, sum=0;
    scanf("%d", &year);
    while(year!=0) {
        sum = sum + year%10;
        year = year/10; }
    if(2016%sum != 0)
        lucky = 2016 + sum - (2016%sum);
    else
        lucky = 2016;
    printf("%d", lucky);
    return 0; }