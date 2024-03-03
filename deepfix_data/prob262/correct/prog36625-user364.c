#include<stdio.h>
#include<strings.h>
void rev(long int a[],long int n,long int index) {
    if(index<0) {
        return; }
  printf("%ld ",a[index]); }
int main() {
   long int n;
   long int i;
   long int a[1000];
   scanf("%ld",&n);
   for(i=0;i<n;i++)
    {scanf("%ld",&a[i]);}
   rev(a,n,n-1);
     return 0; }