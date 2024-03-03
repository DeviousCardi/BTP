#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m, i, j, s, k, f = 0;
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	scanf("%d",&m);
	int b[m];
	for(i = 0; i < m; i++)
	    scanf("%d",&b[i]);
	for(i = 1; i <= n; i++) {
	    for(j = 0; j < n - 1; j++) {
	        if(a[j] < a[j + 1]) {
	            s = a[j + 1];
	            a[j + 1] = a[j];
	            a[j] = s; } }
	    f = 0;
	    for(k = 0; k < m; k++) {
	        if(a[n - i] == b[k]){
	            f = 1;
	            break; } }
	    if(f == 0){
	        printf("%d",a[n - i]);
	        break; } }
	return 0; }