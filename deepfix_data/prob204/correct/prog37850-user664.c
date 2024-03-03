#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int a[100];
	for(i=0;i<100;i++) {
	    scanf("%d",&a[i]); }
	 int b[100];
	 for(i=99;i>=0;i--) {
	     scanf("%d",&b[i]); }
	 if(a[100]==b[100]) {
	     printf("YES"); }
	 else {
	     printf("NO"); }
	 return 0; }