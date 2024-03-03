#include <stdio.h>
int main(){
    int birthYear;
    int sum=0;
    int year;
    scanf("%d", &birthYear);
    while(birthYear!=0) {
        sum = sum + (birthYear%10);
        birthYear = birthYear / 10; }
    year = birthYear;
    while (year%sum!=0) {
        year++; }
    printf("%d", year);
    return 0; }