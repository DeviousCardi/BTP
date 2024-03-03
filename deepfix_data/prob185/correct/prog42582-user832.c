#include <stdio.h>
int scan(int *a,int n) {
    if(n!=0) {
        scanf("%d",a);
        scan(a+1,n-1); }
    return 0; }
int check(int sum,int *a,int k,int n) {
    if(n==0 && sum==k) {
        return 1; }
    if(n==0 && sum!=k) {
        return 0; }
    if( check(sum+*a,a+1,k,n-1) || check(sum,a+1,k,n-1) )
    return 1;
    return 0; }
int main() {
    int n,k;
    scanf("%d %d\n",&n,&k);
    int a[n];
    scan(a,n);
    if(check(0,a,k,n))
    printf("YES");
    else
    printf("NO");
    return 0; }