#include <stdio.h>
int main(){
    int birthYear;
    int sum=0;
    int year;
    scanf("%d", &birthYear);
    year = birthYear;
    while(birthYear!=0) {
        sum = sum + (birthYear%10);
        birthYear = birthYear / 10; }
    printf("sum of digits is %d\n", sum);
    while (year%sum!=0) {
        printf("year = %d, remainder = %d\n", year, year%sum);
        year++; }
    printf("%d", year);
    return 0; }