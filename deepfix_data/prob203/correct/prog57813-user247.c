#include <stdio.h>
int main() {
	int x[50],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&x[i]); }
	for(i=0;i<n;i++){
	    for (j=0;j<n;j++){
	        if (x[i]==x[j]) {
	            printf("YES");
	            return 0; }
	        else
	        {   printf("NO");
	            return 0; } } }
	return 0; }