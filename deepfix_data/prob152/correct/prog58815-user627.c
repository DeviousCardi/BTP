#include <stdio.h>
static int k=0;
int sum(int a[],int n) {
    int i,s=0;
    for(i=0;i<n;i++) {
        s=s+a[i]; }
    return s; }
void check(int a[],int n,int s,int sum) {
    if(k!=0) {
        return; }
    if(n==0) {
        printf("NO");
        k=k+1;
        return; }
    if(sum==s/2) {
        printf("YES");
        k=k+1;
        return; }
    check(a,n-1,s,sum+a[n-1]);
    check(a,n-1,s,sum);
    return; }
int main() {
    int n,a[30],i,s;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    s=sum(a,n);
    check(a,n,s,0);
    return 0; }