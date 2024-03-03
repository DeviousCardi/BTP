#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	printf("ENTER A NUMBER: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    for(j=n;j>=1;++j);
	    if(i==j) {printf("YES\n");}
	    else {printf("NO");} }
	return 0; }