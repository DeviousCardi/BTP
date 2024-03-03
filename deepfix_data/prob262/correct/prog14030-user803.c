#include<stdio.h>
#include<strings.h>
long int count=0;
void reverse(long int a[],long int n) {
     if(count<n) {
          printf("%ld ",a[n-count]);
          count++;
          reverse(a,n); } }
int main() {
    int n;
    scanf("%d",&n);
    long int a[n];
    for(long int i=0;i<n;i++) {
         scanf("%ld",&a[i]); }
     for(long int i=0;i<n;i++) {
         printf("%ld ",a[i]); }
    return 0; }