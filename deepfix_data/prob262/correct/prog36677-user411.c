#include<stdio.h>
#include<strings.h>
void swap(int a,int b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d  ",a); }
int main() {
    int reuselt;
    int n,k;
   scanf("%d",&n);
   int i;
    int a[1000];
   for(i=0;i<n-1;i++) {
    scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
   swap(a[i],a[n-1-i]); }
    return 0; }