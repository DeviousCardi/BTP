#include <stdio.h>
int main() {
	int n1,n2,i,j,k;
	scanf("%d %d",&n1,&n2);
	int str1[n1];
	int str2[n2];
	for(i=0;i<n1;i=i+1) {
	    scanf("%d",&str1[i]); }
	for(i=0;i<n2;i=i+1) {
	    scanf("%d",&str2[i]); }
	for(j=0;j<20;j=j+1) {
	    for(k=0;k<20;k=k+1) {
	        if(str2[j]==str1[k]) {
	            printf("YES");
	            break; }
	        else {
	            printf("NO");
	            break; } } }
	return 0; }