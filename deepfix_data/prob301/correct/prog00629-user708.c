#include <stdio.h>
#include <stdlib.h>
int main() {
    static int n, i, a[10000], ans, cur, max=0, occ;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	cur=a[0];
	occ=1;
	for(i=1;i<n;i++) {
	    if(cur==a[i])
	        occ++;
	    else {
	        if(occ>=max) {
	            ans=cur;
	            max=occ; }
	        cur=a[i];
	        occ=1; } }
	if(occ>=max)
	    ans=cur;
	printf("%d",ans);
	return 0; }