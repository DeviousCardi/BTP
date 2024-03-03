#include <stdio.h>
int fun(int b[], int d, int n){
    if(d>n){
        return b[n]; }
    else{
        int a[n];
        for(int i=0; i<=n; i++) a[i]=0;
        for(int i=0; i<d; i++) a[i]=b[i];
        for(int i=d; i<=n; i++){
            for(int j=i-d; j<i; j++){
                a[i]=a[i]+a[j]; } }
        return a[n]; } }
int main() {
	int d, n, i, ans;
	scanf("%d %d\n", &d, &n);
	int b[d];
	for(i=0; i<d; i++){
	    scanf("%d", &b[i]); }
	ans=fun(b, d, n);
	printf("%d", ans);
	return 0; }