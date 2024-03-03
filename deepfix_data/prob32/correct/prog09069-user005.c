#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j, flag;
	scanf("%d", &n);
	int a[n];
	if(n<20)
	for(i=0;i<n;i++) {
	    scanf("%d", &a[i]); }
	    for(j=1;j<n;j++) {
	    if((a[j]<a[j-1]) && (a[j]<a[j+1])) {
	        flag=1; } }
    if(flag==1) {
           printf("Yes"); }
    else printf("No");
	return 0; }