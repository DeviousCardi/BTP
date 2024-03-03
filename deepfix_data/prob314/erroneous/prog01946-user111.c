#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t,a,b;
	scanf("%d\n",&n);
	int s[n];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&s[i]); }
	scanf("%d\n",&t);
	for(b=1;b<=t;b++) {
	    scanf("%d\n",&a);
	    for(i=0;i<n;i++) {
	        if(s[a]>s[i]) {
	        printf("No\n");
	        break; }
	        else
	        continue
	        printf("Yes\n"); } }
	return 0; }