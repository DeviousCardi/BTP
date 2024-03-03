#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,a1[20],a2[20];
	int i,j;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	for(j=0;j<n2;j++) {
	    scanf("%d",&a2[j]); }
	int min=a1[0];
	for(i=1;i<n1;i++) {
	    if(a1[i]<=min)
	        min=a1[i]; }
	int flag=0;
	for(i=0;i<n2;i++) {
	    flag=flag+(min==a2[i]); }
	if(flag==0)
	   printf("NO");
	else
	   printf("%d",min);
	return 0; }