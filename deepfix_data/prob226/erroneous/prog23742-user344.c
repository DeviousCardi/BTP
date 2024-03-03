#include <stdio.h>
int a[30];
for(int k=0; k<30; k++) a[k]=0;
int fun(int b[], int d, int n, int i, int ans){
    if((d>n)&&(i<d)){
        a[i]=b[i];
        if(i==n) return b[n]; }
    if(i>=d){
        for(int j=i-d; j<i; j++) a[i]=a[i]+a[j];
        return fun(b, d, n, i+1, ans+a[i]); } }
int main() {
	int d, n, i;
	scanf("%d %d\n", &d, &n);
	int b[d];
	for(i=0; i<d; d++){
	    scanf("%d", &b[i]); }
	return 0; }