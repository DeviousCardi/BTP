#include<stdio.h>
#include<strings.h>
void swap(int a,int b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d ",a); }
int main() {
    int n;
   scanf("%d",&n);
   int i;
    int a[1000];
   for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
      if(n<0)
      return 0;
       else
       swap(a[i],a[n-1-i]); }
    return 0; }