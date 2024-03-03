#include <stdio.h>
int main() {
	int n1,n2,i,j,k,flag;
	scanf("%d",&n1);
	int a1[n1];
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	int a2[n2];
	for(i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }
	for(i=0;i<n2;i++) {
	    flag=0;
	   for(j=0;j<n1;j++) {
	       if(a2[i]==a1[j]) {
	           for(k=j;k<n1;k++) {
	               flag=flag+(a2[i]==a1[k]); }
	           if(flag==n2)
	                printf("YES") } } }
	if(flag==n2)
	    printf("YES");
	else
	    printf("NO");
	return 0; }