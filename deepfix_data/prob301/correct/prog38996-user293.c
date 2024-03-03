#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int num[10000];
	int i=0;
	while(i<n) {
	    scanf("%d",&num[i]);
	    i++; }
	int mode,big=0,count=1,mod=num[0];
	for(i=1;i<n;i++) {
	    if(num[i]==mod) {
	        count++; }
	    else {
	        if(count>=big)
	        {mode=num[i-1];
	         big=count; }
	        mod=num[i];
	        count=1; } }
	printf("%d",mode);
	return 0; }