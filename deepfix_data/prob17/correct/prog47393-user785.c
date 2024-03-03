#include <stdio.h>
int main() {
	int n, m, i, j, k, f = 1;
	scanf("%d",&m);
	int b[m];
	for(i = 0; i < m; i++)
	    scanf("%d",&b[i]);
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	for(j = 0; j < n; j++) {
	   if(a[0] == b[j]) {
	       break; } }
	printf("%d",j);
	 for(i = j + 1; i < j + n; i++) {
	     for(k = 1; k < n; k++){
	        if(a[i] != b[k]){
	           f = 0; } } }
	 if(f == 1)
	    printf("YES");
	 if(f == 0)
	    printf("NO");
	return 0; }