#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i, res;
    if(n<=1) {
        return 1; }
    res=0;
    for(i=0; i<n; i++) {
        res=res + catalan(i)*catalan(n-i-1); }
    return res; }
int main() {
	int t, k, i, j, check, ans;
	scanf("%d\n", &t);
	for(i=0; i<t; i++) {
	    scanf("%d\n", &k);
	    j=0;
    	check=1;
	    while(check) {
	        ans=catalan(j);
	        if(ans>k) {
	            ans=catalan(i-1);
	            break; }
	        j++; }
	    printf("%d\n", ans); }
	return 0; }