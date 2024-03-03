#include <stdio.h>
#include <stdlib.h>
int catalan(int s[100]) {
    int i;
    if(s[i]==0)
    return 1;
    else
    return catalan(s-1)*(4*s[i]-2)/(s[i]+1); }
int main() {
	int t,i;
	int s[100];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&s[i]); }
	for(i=0;i<t;i++) {
	    printf("%d\n",catalan(s[i])); }
	return 0; }