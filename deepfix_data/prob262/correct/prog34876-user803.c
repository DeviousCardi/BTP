#include<stdio.h>
#include<strings.h>
long int count=0;
void reverse(long int a[],int n) {
     if(count<n) {
          printf("%ld",a[n-count]);
          count++;
          reverse(a,n); } }
int main() {
    long int n;
    scanf("%ld",&n);
    long int a[1000000000];
    for(int i=0;i<n;i++) {
         scanf("%ld",&a[i]); }
    return 0; }