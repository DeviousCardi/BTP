#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
  int i, sum=0;
  if(n<1)return 1;
  else {
    for(i=0;i<n;i++) {
        sum=sum+catalan(i)*catalan(n-1-i); }
    return sum; } }
int search(int n) {
    int i;
    for(i=0;catalan(i)<=n;i++)
    {  }
return catalan(i); }
int main() {
	int t,i;
	int k;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    printf("%d\n",search(k)); }
return 0; }