#include<stdio.h>
#include<strings.h>
int swap(int a,int b) {
    int temp;
    temp=a;
    a=b;
    b=temp; }
int main() {
    int reuselt;
    int n,k;
   scanf("%d",&n);
   int i;
    int a[1000];
   for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
  for(i=1;i<n;i++) {
   swap(a[i],a[n-1-i]);
    printf("%d ",a[i]); }
    return 0; }