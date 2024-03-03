#include <stdio.h>
#include <stdlib.h>
int Hanoi(int n) {
    if(n==0) {
        return 0; }
   else if(n==1) {
    return 1; }
   else
   return 2*Hanoi(n-1)+1; }
   int main() {
  int n,i;
  scanf("%d",&n);
   int a[n];
  for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
   printf("%d",Hanoi(a[n]));
	return 0; }