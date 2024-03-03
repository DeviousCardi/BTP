#include<stdio.h>
#include<strings.h>
void recur(int a[n],int n) {
    if(n==0) {
        return; }
    printf("%d",a[n-1]);
    recur(a,n--);
    return; }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    recur(a,n);
    return 0; }