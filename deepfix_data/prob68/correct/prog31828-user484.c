#include<stdio.h>
int product(int a[],int n){
if (n==0)
    return 0;
if(n==1)
    return a[0];
else
    return a[n-1]* product(a,n-1); }
int main() {
    int n;
    int a[1000000000];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
     for(int i=0;i<n;i++) {
        printf("%d",a[i]); }
    return 0; }