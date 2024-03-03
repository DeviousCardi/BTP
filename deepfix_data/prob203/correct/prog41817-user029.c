#include <stdio.h>
int main() {
	int n,a[100],c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(int i=0;i<n;i++)
	{ c=0;
	    for(int x=0;x<n;x++) {
	        if(a[i]==a[x])
	        c++; } }
	if(c>1) {
	    printf("YES"); }
	else
	printf("NO");
	return 0; }