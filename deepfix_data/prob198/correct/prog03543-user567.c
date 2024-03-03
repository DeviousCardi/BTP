#include <stdio.h>
#include <stdlib.h>
int min(int a[],int n1) {
    int	j,m=a[0];
	for(j=1;j<n1;j++) {
	    if(m>a[j]) {
	        m=a[j]; } }
	return m; }
int main() {
	int n1,n2,i,j,k,l,m;
	scanf("%d",&n1);
	int a1[n1];
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	int a2[n2];
	for(i=0;i<n1;i++) {
	    scanf("%d",&a2[i]); }
	m=min(a1,n1);
	printf("%d",m);
	return 0; }