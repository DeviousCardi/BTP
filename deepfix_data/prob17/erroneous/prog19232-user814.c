#include <stdio.h>
int main() {
	int n1,n2;
	int a1[n1],a2[n2];
	int i;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("5d",a2[i]); }
	if(n2<=n1) {
	    for(i=0;i<n1;i++) {
	        for(j=0;j<n2;j++) {
	            if(a1[i]==a2[j]) {
	                for(k=1;k<n2;k++) {
	                    if(a1[i+k]=a2[j+k])
	                    continue; }
	                printf("YES"); }
	            else
	            continue; } } }
	else
	printf("NO\n");
	return 0; }