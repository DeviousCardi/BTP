#include <stdio.h>
int main() {
    int n,rem = 1,sum = 0,year;
    scanf("%d",&n);
    while( n != 0) {
        rem = n % 10;
        n = (n - rem) / 10;
        sum += rem; }
    for(year = 2016 ;;year++) {
        if( year % sum == 0) {
                printf("%d",year);
                break; } }
    return 0; }