#include <stdio.h>
int main() {
	int a1[20],a2[20],n1,n2,i,j,c,flag=0;
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d ",&a1[i]);
	    if(i=n1-1) printf("\n"); }
	scanf("%d\n",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d ",&a2[i]);
	    if(i=n2-1) printf("\n"); }
	for(i=0;i<n1-n2;i++) {
	    c=0;
	    for(j=0;j<n2;j++) {
	        if(a1[i+j]==a2[j]) c++; }
	    if(c==n2) flag=1; }
	if(flag==1) printf("YES\n");
	else printf("NO\n");
	return 0; }