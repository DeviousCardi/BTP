#include <stdio.h>
int main() {
	int a[50];
	int i,f=0,n;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(int j=i+1;j<n;j++) {
	        if(a[i]==a[j])
	        {f=1; break;} }
	    if(f) {break;} }
	if(f) printf("yes");
	else printf("no");
	return 0; }