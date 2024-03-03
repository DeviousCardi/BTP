#include<stdio.h>
#include<strings.h>
long int count=0;
void reverse(long int a[],int n) {
     if(count<n) {
          printf("%ld ",a[n-count]);
          count++;
          reverse(a,n); } }
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++) {
         scanf("%d",&a[i]); }
    reverse(a,n);
    return 0; }