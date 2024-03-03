#include <stdio.h>
search(int a[],int n,int k) {
    int i,count=0;
    for(i=0;i<n;i++) {
        if(a[i]==k)
        count++; }
    if(count==0)
    return 0;
    else
    return 1; }
int num(int a[],int n,int k) {
    int count=0;,i;
    for(i=0;i<n;i++) {
        if(a[i]==k)
        count++; }
    return count; }
int main() {
    int a[1000],m,d,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++) {
        if(search(a,n,i)==0)
        m=i; }
    for(i=0;i<n;i++) {
        if(num(a,n,a[i])==2)
        d=a[i]; }
    printf("%d\n%d",d,m);
    return 0; }