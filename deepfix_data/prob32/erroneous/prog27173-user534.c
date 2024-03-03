#include <stdio.h>
#include <stdlib.h>
int evaluate(int g[],int l) {
    int j,k,term;
    for (int j=1;j<l;j++) {
        if ((g[j]<g[j-1])&&(g[j],g[j+1]))
          k=0;
          else k=1;
          term=term*k; }
    return term; }
int main() {
	int n,s[20],i=0,result;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    s[i]=getchar(); }
	result=evaluate(s[],n);
	if (result==0)
	printf("Yes");
	else printf ("No");
	return 0; }