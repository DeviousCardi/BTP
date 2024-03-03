#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,rev=0,check,rem;
    scanf("%d",&n);
    check=n;
    while(check!=0) {
        rem=check%10;
        rev=rev*10+rem;
        check=check/10; }
    if(rev==n) {
        printf("YES"); }
    else {
        printf("NO"); }
    return 0; }