#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, a[n], i, j, flag;
	scanf("%d", &n);
	if(n<20)
	for(i=0;i<n;i++) {
	    flag=0;
	    scanf("%d", &a[i]);
	    for(j=1;j<n;j++) {
	    if((a[j]<a[j-1]) && (a[j]<a[j+1])) {
	        flag=1; }
	    else continue; } }
	if(flag==1)
	{printf("Yes");}
	else printf("No");
	return 0; }