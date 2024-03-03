#include <stdio.h>
int main() {
	int n1,n2;
	int a1[20];
	int a2[20];
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d\n",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }
	for(j=0;j<n1;j++) {
	    if(a2[0]==a1[i]) {
	        c=c+1; } }
	for(j=0;j<n2;j++) {
	    if(a2[j]==a1[c]) {
	        c++;l++; } }
	if(l==n2){printf("yes");}
	else{printf("no");}
	return 0; }