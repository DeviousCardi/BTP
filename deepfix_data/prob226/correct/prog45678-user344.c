#include <stdio.h>
int fun(int b[], int d, int n){
    if(d>n){
        return b[n]; } }
int main() {
	int d, n, i, ans;
	scanf("%d %d\n", &d, &n);
	int b[d];
	for(i=0; i<d; i++){
	    scanf("%d", &b[i]); }
	ans=fun(b, d, n);
	printf("%d", ans);
	return 0; }