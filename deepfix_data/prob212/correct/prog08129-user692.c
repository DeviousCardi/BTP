#include <stdio.h>
int main(){
    int birth_year, year, sum;
    scanf("%d", &birth_year);
    while (birth_year) {
        sum += (birth_year % 10);
        birth_year /= 10; }
    printf("%d", sum);
    for (year = 2016; year > 0; year--) {
        if (year % sum == 0) {
            printf("%d", year);
            break; } }
    return 0; }