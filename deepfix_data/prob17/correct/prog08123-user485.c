#include <stdio.h>
int main() {
	int a1[20],a2[20],n1,n2,i,j,flag=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d ",&a1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }
	for(i=0;i<n1;i++) {
	    if(a2[0]==a1[i]) {
	        for(j=1;j<n2;j++) {
	            if(a2[j]!=a1[i+j])
	            flag=1; } } }
	if(flag==0)
	printf("YES");
	else
	printf("NO");
	return 0; }