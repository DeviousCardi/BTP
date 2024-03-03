#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,v[n],print=0;
     scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&v[i]);
	for(i=1;i<n-1;i++) {
	    if(v[0]<v[1]){print=1;break;}
	    else if(v[n-1]<v[n-2]){print=1;break;}
	    else if((v[i]<v[i-1])&&(v[i]<v[i+1])){print=1;break}
	    else{p=0;} }
	if(print==1)
	printf("Yes");
	else
	printf("No");
	return 0; }