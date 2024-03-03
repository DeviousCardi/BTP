#include <stdio.h>
#include <stdlib.h>
int term(int t[i],int a,int b) {
    int n,m=2;
    while(m!=k) {
    n=a+b;
    a=b;
    b=n;
    m++; }
    return n; }
int main() {
	int t,t[100],a=0,b=1,n,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	  scanf("%d",&t[i]);
	  if(k==1)
	  printf("%d\n",a);
	  if(k==2)
	  printf("%d\n",b);
	  if(k>3)
	  n=term(t[i],a,b);
	  printf("%d\n",n); }
	return 0; }