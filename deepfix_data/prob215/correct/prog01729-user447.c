#include <stdio.h>
#include <stdlib.h>
int is_prime(int b)
    {int j,k=1;
      for(j=2;j*j<=b;j=j+1) {
          if (b%j==0) k=0; }
      return k; }
int main() {
	int a,i,j,s=0,b[10000],c=0;
	scanf("%d",&a);
	for(i=0;i<10000;i=i+1)
	    b[i]=0;
	for(i=2;i<a;i=i+1) {
	    if(is_prime(i)==0)
	    continue;
	    else {
	        if(a%i==0)
	          {b[c]=i;
	           c=c+1;
	           for(j=0;j<=100;j=j+1)
	             { if((a/i)%i==0) {
	                   b[c]=i;
	                } c=c+1; } } } }
	for(i=0;i<10000;i=i+1) {
	    s=s+b[i]; }
	if(a==s) printf("YES");
	else printf("NO");
	return 0; }