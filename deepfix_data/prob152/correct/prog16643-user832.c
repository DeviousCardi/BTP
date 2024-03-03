#include <stdio.h>
#include <stdlib.h>
int counter =0;
int summation_of_scan(int *a,int n) {
    if(n!=0) {
        scanf("%d",a);
        return summation_of_scan(a+1,n-1)+*a; }
    return 0; }
int check(int sum,int *a,int total_sum,int n) {
    if(n==0 && sum==total_sum/2) {
        return 1; }
    if( check(sum+*a,a+1,total_sum,n-1) || check(sum,a+1,total_sum,n-1) )
    return 1;
    return 0; }
int main() {
    int n;
    scanf("%d",&n);
    int *a=(int *)(malloc(n*sizeof(int)));
    int sum=summation_of_scan(a,n);
    if(!(sum%2)) {
        if(check(0,a,sum,n)) {
            printf("YES");
            return 0; } }
    printf("NO");
    return 0; }