#include<stdio.h>
#include<strings.h>
void rev(long int a[],long int n,long int index) {
    if(index<0) {
        return; }
  printf("%ld ",a[index]);
  return rev(a,n,index-1); }
int main() {
   long int n;
   long int i;
   long int a[100000];
   scanf("%ld",&n);
   for(i=0;i<n;i++)
    {scanf("%ld",&a[i]);}
     return 0; }