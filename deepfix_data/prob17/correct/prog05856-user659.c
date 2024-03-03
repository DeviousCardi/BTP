#include <stdio.h>
int main() {
	int i,j,n1,n2,a,a1[20],a2[20],flag=0;
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d ",&a1[i]); }
	scanf("%d\n",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d ",&a2[i]); }
	for(i=0;i<n2;i++) {
	    for(j=0;j<n1;j++) {
	        if(a1[i]==a2[j]&&a1[i+1]==a2[j+1]) {
	            printf("YES");
	            break; }
	        else
	        continue; } }
	return 0; }