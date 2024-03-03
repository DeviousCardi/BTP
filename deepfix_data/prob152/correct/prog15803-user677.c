#include <stdio.h>
int z=0;
int equal(int b,int sum,int n,int a[]) {
    if(sum==0) {
        return 1; }
    if((n==0)||(sum<0)) {
        return 0; }
    else {
        return equal(b+1,sum,n-1,a)+equal(b+1,sum-a[b],n-1,a); } }
int main() {
    int a[100],n,i,sum=0;
    scanf("%d",&n);
    if(n==0) {
        printf("YES");
        return 0; }
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum=sum+a[i]; }
    if(sum%2!=0) {
        printf("NO");
        return 0; }
    sum=sum/2;
    z=equal(0,sum,n,a);
    if(z>0) {
        printf("YES");
        return 0; }
    else {
        printf("NO"); }
    return 0; }