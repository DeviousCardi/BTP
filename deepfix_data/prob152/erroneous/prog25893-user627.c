#include <stdio.h>
int sum(int a[],int n) {
    int i,s=0;
    for(i=0;i<n;i++) {
        s=s+a[i]; }
    return s; }
int check(int a,int n,int s,int sum) {
    if(sum==s/2) {
        printf("YES");
        return 0; }
    check(a,n-1,s,sum+a[n-1]);
    check(a,n-1,s,sum);
    printf("NO");
    return 0; }
int main() {
    int n,a[30],i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    s=sum(a,n);
    check(a,n,s,0);
    return 0; }