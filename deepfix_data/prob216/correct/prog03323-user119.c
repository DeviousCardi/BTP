#include <stdio.h>
#include <stdlib.h>
int term(int k,int a,int b) {
    int n,m=2;
    while(m!=k) {
    n=a+b;
    a=b;
    b=n;
    m++; }
    return n; }
int main() {
	int t,k,a=0,b=1,n,i;
	scanf("%d\n",&t);
	for(i=1;i<=t;i++) {
	  scanf("%d",&k);
	  if(k==1)
	  printf("%d\n",a);
	  if(k==2)
	  printf("%d\n",b);
	  if(k>3)
	  n=term(k,a,b);
	  printf("%d\n",n); }
	return 0; }