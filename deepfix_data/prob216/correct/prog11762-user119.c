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
	int tc,k,t[100],a=0,b=1,n,i;
	scanf("%d\n",&tc);
	for(i=0;i<tc;i++) {
	  scanf("%d",&t[i]); }
	for(i=0;i<tc;i++) {
	  if(t[i]==1)
	  printf("%d\n",a);
	  if(t[i]==2)
	  printf("%d\n",b);
	  if(t[i]>3) {
	     k=t[i];
	  n=term(k,a,b);
	  printf("%d\n",n); } }
	return 0; }