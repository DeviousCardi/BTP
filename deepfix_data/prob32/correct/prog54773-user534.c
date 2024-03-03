#include <stdio.h>
#include <stdlib.h>
int main() {
    char s[20];
	int n,i=0,ch,k,term=1,a;
	scanf("%d",&n);
	ch=getchar();
	while (i<n) {
	    s[i]=ch;
	    i=i+1;
	    ch=getchar(); }
	for (a=1;a<n;a++) {
	    if (s[a]<s[a+1]&&s[a]<s[a-1])
	    k=0;
	    else k=1;
	    term=term*k; }
	if (term==0)
	printf("Yes");
	else printf("No");
	return 0; }