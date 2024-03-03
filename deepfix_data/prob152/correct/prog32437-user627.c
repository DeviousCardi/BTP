#include <stdio.h>
int sum(int a[],int n) {
    int i,s=0;
    for(i=0;i<n;i++) {
        s=s+a[i]; }
    return s; }
int check(int a[],int n,int s,int sum) {
    if(n==0) {
        return 0; }
    if(sum==s/2) {
        return 1; }
    check(a,n-1,s,sum+a[n-1]);
    check(a,n-1,s,sum);
    return 0; }
int main() {
    int n,a[30],i,s,c;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    s=sum(a,n);
    c=check(a,n,s,0);
    if(c==1) {
        printf("YES"); }
    if(n==0) {
        printf("NO"); }
    return 0; }