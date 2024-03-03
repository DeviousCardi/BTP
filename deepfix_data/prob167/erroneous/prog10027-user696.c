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
    for(i=0,i<n;i++)
    printf("%d",a[i]);
    return 0; }
int sum(int a[],int n) {
    static j=0,total=0;
    if(j==n) return total;
    total=total+a[j];
    j++;
    sum(a,n); }