#include <stdio.h>
int main() {
	int n1,n2;
	int a1[20],a2[20];
	int i,j,k;
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d\n",&a1[i]); }
	scanf("%d\n",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d\n",&a2[i]); }
	if(n2<=n1) {
	    for(i=0;i<n1;i++) {
	        for(j=0;j<n2;j++) {
	            if(a1[i]==a2[j]) {
	                for(k=1;k<n2;k++) {
	                    if(a1[i+k]==a2[j+k])
	                    continue; }
	                printf("YES"); }
	            else
	            continue; } } }
	else
	printf("NO\n");
	return 0; }