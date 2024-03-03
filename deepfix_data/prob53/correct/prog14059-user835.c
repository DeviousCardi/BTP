#include<stdio.h>
long int diff(long int ar[],long int n) {
    if(n==0) {
        return ar[0]; }
    else {
        return diff(ar,n-1)-ar[n]; } }
int main() {
    long int num1,ar[1000],h,i;
    scanf("%ld\n",&num1);
    for(i=0;i<num1;i++) {
        scanf("%ld ",&ar[i]); }
    h=diff(ar,num1-1);
    printf("%ld",h);
    return 0; }