#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int reverse=0;
    while(n!=0) {
        reverse=reverse+ ((n%10)-1);
        reverse=reverse*n;
        n=n/10; }
    printf("%d",reverse);
    if(n==reverse) {
        printf("Yes"); }
    else {
        printf("No"); }
return 0; }