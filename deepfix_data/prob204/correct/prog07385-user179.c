#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j=1,n;
	scanf("%d",&n);
	for(i=1;i<20;i++){
	    if(n%(10*i)!=0) j=j+1;
	    else break; }
	int m[j];
	m[0]=n%10;
	for(i=1;i<j;i++){
	    m[i]=(n/(10*i))%10; }
	if(m[j]==n) printf("YES");
	else printf("NO");
	return 0; }