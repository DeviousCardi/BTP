#include <stdio.h>
#include <stdlib.h>
int is_prime(int b)
    {int j,k=1;
      for(j=2;j*j<=b;j=j+1) {
          if (b%j==0) k=0; }
      return k; }
int main() {
	int a,i,s=0,b[1000],c=0;
	scanf("%d",&a);
	for(i=2;i*i<=a;i=i+1) {
	    if(is_prime(i)==0)
	    continue;
	    else {
	        if(a%i==0)
	          {b[c]=i; }
	       c=c+1; } }
	for(i=0;i<c;i=i+1) {
	    s=s+b[i]; }
	if(a==s) printf("YES");
	else printf("NO");
	return 0; }