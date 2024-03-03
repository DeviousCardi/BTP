#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i,j,m,c;
	scanf("%d",&n);
	m=n/10;
	c=1;
	while(m!=0) {
	    m=m/10;
	    c++; }
	int x[c];int k=c-1;
	for(i=0;i<c;i++) {
	    x[i]=n/(pow(10,k));
	    n = (n % (int((pow)(10,k)))) ;
	    k--; }
	int l=c-1;
	for(j=0;j<c;j++) {
	    if(x[j]!=x[l])
	   l--;
	    goto op; }
	op:printf("NO");
	printf("YES");
	return 0; }