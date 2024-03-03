#include<stdio.h>
int sum(int [],int);
int n;
int main() {
    int i,finalsum;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    finalsum=sum(a,n);
    printf("%d",finalsum);
    return 0; }
int sum(int a[],int n) {
    static int j=0;
    static int total=0;
     if(j==n) {
        return total; }
    total=total+a[j];
    j++;
    sum(a,n);
    return sum(a,n); }