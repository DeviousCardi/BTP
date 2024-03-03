#include <stdio.h>
#include <stdlib.h>
int evaluate(int g[],int l) {
    int j,k,term=1;
    for (j=1;j<l;j++) {
        if ((g[j]<g[j-1])&&(g[j]<g[j+1]))
          k=0;
          else k=1;
          term=term*k; }
    return term; }
int main() {
	int n,s[20],i=0,result,ch;
	scanf("%d",&n);
	scanf("%d",&ch);
	int count=0;
	while (i<n && count<20) {
	    s[i]=ch;
	    i=i+1;
	    count=count+1;
	    scanf("%d",&ch); }
	result=evaluate(s[20],n);
	if (result==0)
	printf("Yes");
	else printf ("No");
	return 0; }