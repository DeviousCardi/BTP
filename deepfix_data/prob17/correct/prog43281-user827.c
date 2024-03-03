#include <stdio.h>
int main() {
	int n1,n2,a[n1+2],b[n2+2],i,j,c=-1;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a[i]);
	    printf("%d\n",a[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&b[i]); }
	printf("%d\n",a[1]);
	for(i=0;i<n1;i++) {
	    if(a[i]==b[0]) {
	        c=i;
	        printf("%d",c);
	        break; } }
	return 0; }