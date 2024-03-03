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
	int min=a1[0]+a1[1];
	int flag;
	for(i=0;i<n1;i++) {
	    flag=0;
	    for(j=0;j<n2;j++) {
	        flag=flag+(a1[i]==a2[j]); }
	    if(a1[i]<=min&&flag==0)
	        min=a1[i]; }
	if(min==a1[0]+a1[1])
	    printf("NO");
	else
	    printf("%d",min);
	return 0; }