#include <stdio.h>
int main() {
	int a1[20],a2[20];
	int n1,n2,x=0;
	scanf("%d",&n1);
	for(int i=0;i<n1;i++) {
	    scanf("%d",a1+i); }
	scanf("%d",&n2);
	for(int i=0;i<n2;i++) {
	    scanf("%d",a2+i); }
	for(int i=0;i<(n1-n2+1);i++) {
	    if(a1[i]==a2[0]) {
	        x=1;
	        for(int j=1;j<n2;j++) {
	            if(a1[i+j]!=a2[j]) {
	                x=0; } } } }
	 if(x) {
	     printf("YES"); }
	 else {
	     printf("NO"); }
	return 0; }