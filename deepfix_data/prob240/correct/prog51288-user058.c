#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i, res;
    if(n<=1) {
        return 1; }
    for(i=0; i<n; i++) {
        res=res + catalan(i)*catalan(n-i-1); }
    return res; }
int main() {
	int t, k, i, check, ans;
	scanf("%d\n", &t);
	for(i=0; i<t; i++) {
	    scanf("%d\n", &k); }
	check=1;
	while(check) {
	    ans=catalan(i);
	    i++;
	    if(ans>k) {
	        check=0;
	        ans=catalan(i-1); }
    	printf("%d\n", ans); }
	return 0; }