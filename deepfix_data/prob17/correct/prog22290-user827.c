#include <stdio.h>
int main() {
	int n1,n2,a[n1],b[n2],i,j,c=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a[i]);
	    printf("%d\n",a[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&b[i]);
	    printf("%d\n",b[i]); }
	for(i=0;i<n2;i++) {
	    for(j=0;j<n1;j++) {
	        if(a[j]==b[i]) {
	            c++;
	            printf("%d %d %d\n",c,i,j); } } }
	return 0; }