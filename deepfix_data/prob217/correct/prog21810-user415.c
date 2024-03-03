#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int a[n];
		int i;
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	int s;
	scanf("%d",&n);
	scanf("%d",&s);
	int k,j;
	for(k=0;k<n;k++){
	    for(j=0;j<n;j++){
	        if(a[j]==(s-a[k]))
	printf("(a[k],a[j])");
	else continue; } }
	return 0; }