#include<stdio.h>
#include<strings.h>
void reverse(long int a[],int n) {
     static long int count=0;
     if(count<n) {
          printf("%ld",a[n-count]);
          reverse(a,n); } }
int main() {
    long int n;
    scanf("%ld",&n);
    long int a[1000000000];
    for(int i=0;i<n;i++) {
         scanf("%ld",&a[i]); }
    reverse(a,n);
    return 0; }