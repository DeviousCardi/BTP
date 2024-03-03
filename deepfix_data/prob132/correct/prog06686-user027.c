#include <stdio.h>
int sum(int a,int ab[],int n) {
    int count=0;
    for(int i=0;i<n;i=i+1) {
        if(a==ab[i]);
        count=count+1; }
    return count; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int ab;
    for(int i=0;i<n;i=i+1) {
        scanf("%d,",&ab);
        a[i]=ab; }
    int l=0;
    for(int i=0;i<n;i=i+1) {
        int b=0;
        b=sum(a[i],a,n);
        if(b!=a[i])
        break;
        l=l+1; }
    if(l==n-1) {
        printf("Yes"); }
    else{
        printf("No"); }
    return 0; }