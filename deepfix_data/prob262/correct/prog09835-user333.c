#include<stdio.h>
#include<strings.h>
void reverse(int a[],int size) {
  if(size>0) {
       printf("%d",a[size-1]);
       reverse(a,size-1); } }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    reverse(a,n);
    return 0; }