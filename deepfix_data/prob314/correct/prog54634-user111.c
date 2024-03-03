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
	    if(a>0&&a<n-1) {
	        if(s[a]<s[a-1]&&s[a]<s[a+1])
	        printf("Yes\n");
	        else
	        printf("No\n"); }
	    else
	    if(a==0||a==n-1) {
	      if(s[a]<s[a-1]||s[a]<s[a+1])
	      printf("Yes");
	      else
	      printf("No");
	      printf("\n"); } }
	return 0; }