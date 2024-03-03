#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi(int n) {
     return hanoi(n-1); }
int main() {
	int t,i;
	int a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	        scanf("%d",&a[i]); }
	for(i=0;i<t;i++){
  if ((a[i]+1)%2==0)  {
      printf("yes"); }
  else
  printf("no"); }
	return 0; }