#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i,n;
	scanf("%d\n",&n);
		int x[20];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&x[i]); }
	for(i=0;i<n;i++) {
	if(x[i]==0&&x[i]>x[i+1]) {
	      printf("Yes");
	      break; }
	else if(x[i]==n-1&&x[i]>x[i-1]) {
	      printf("Yes");
	      break; }
	else if(x[i]>x[i+1]&&x[i]>x[i-1]) {
	      printf("Yes");
	      break; }
	else {
	      printf("No");
	      break; } }
	return 0; }