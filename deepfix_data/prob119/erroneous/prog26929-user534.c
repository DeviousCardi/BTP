#include <stdio.h>
#include <stdlib.h>
int Tower_of_Hanoi(int n,'a','c','b') {
      int count=0;
    if (n>0) {
      Tower_of_Hanoi(n-1,'a','b','c');
      count++;
      count+=Tower_of_Hanoi(n-1,'c','b','a'); }
    return count; }
int main() {
	int n,ar[50],i,p;
	scanf("%d",&n);
	for (i=0;i<n;i++) {
	    scanf("%d",&ar[i]);
	    p=Tower_of_Hanoi(n,'a','c','b');
	    printf("%d",count); }
	return 0; }