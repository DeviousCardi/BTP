#include <stdio.h>
#define START_YEAR 2016
int main(){
    int n,i,sum=0,a;
    scanf("%d",&n);
    while(n!=0) {
         a = n%10;
        sum = sum + a;
         n/=10; }
    i = START_YEAR + (sum - START_YEAR%sum)%sum;
    printf("%d", i);
    return 0; }