#include <stdio.h>
int main(){
    int birthYear;
    int sum=0;
    int year=2016;
    scanf("%d", &birthYear);
    while(birthYear!=0) {
        sum = sum + (birthYear%10);
        birthYear = birthYear / 10; }
    while (year%sum!=0) {
        year++; }
    printf("%d", year);
    return 0; }