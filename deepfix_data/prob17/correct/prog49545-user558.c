#include <stdio.h>
int main() {
	int n,m,a[n],b[m],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&m);
	for(j=0;j<m;j++)
	scanf("%d",&b[j]);
	for(j=0;j<n;j++) {
	    for(i=0;i<m;i++) {
	        if(a[i]!=b[j]){
	        printf("NO");
	        return 0;}
	        else {
	            a[i]=a[i+1];
	            printf("YES");
	            return 0; } } }
	return 0; }