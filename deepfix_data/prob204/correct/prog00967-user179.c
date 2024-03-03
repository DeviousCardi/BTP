#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m[10];
	scanf("%d",&n);
	for(i=1;i<10;i++){
	    m[1]=n%10;
	    m[i+1]=((n-m[i])/10)%10;
	    if(m[i]==0) break; }
	if(m[10]==n) printf("YES");
	else printf("NO");
	return 0; }