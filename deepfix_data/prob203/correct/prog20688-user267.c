#include <stdio.h>
int main() {
	int n,i,j,k=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++){
	        if(a[i]==a[j]){
	            k=k+1;
	            break; } } }
	    if(k==0) printf("NO");
	    else printf("YES");
	return 0; }