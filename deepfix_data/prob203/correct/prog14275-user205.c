#include <stdio.h>
int main() {
	int n, i, j, flag=0;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++) {
	    scanf("%d", &a[i]);
	    for(j=0; j<i; j++) {
	        if(a[j]==a[i]) {
	            flag = 1;
	            break; } }
	    if(flag==1)     break; }
	if(flag==1) printf("YES\n");
	else        printf("NO\n");
	return 0; }