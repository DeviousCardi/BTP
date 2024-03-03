#include<stdio.h>
#include<strings.h>
int count=0;
void reverse(int a[],int n) {
     if(count<n) {
          printf("%d ",a[n-count]);
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