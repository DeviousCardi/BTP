#include <stdio.h>
int main() {
    int birth_year;
    scanf("%d",&birth_year);
    int n=birth_year;
    int sum=0;
    int count=2016;
    while(n>0) {
        sum=sum+n%10;
        n=n/10; }
    for (int i=2016;i%sum!=0;i++) {
        count++; }
    printf("%d",count);
    return 0; }