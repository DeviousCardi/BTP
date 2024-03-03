#include <stdio.h>
int main() {
	int n1,n2,i,j,k;
	scanf("%d",&n1);
	int str1[n1];
	int str2[n2];
	for(i=0;i<n1;i=i+1) {
	    scanf("%d",&str1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i=i+1) {
	    scanf("%d",&str2[i]); }
	for(j=0;j<n2;j=j+1) {
	    for(k=0;k<n1;k=k+1) {
	        if(str2[j]==str1[k]) {
	            printf("YES");
	            break; }
	        else{printf("NO");} } }
	return 0; }