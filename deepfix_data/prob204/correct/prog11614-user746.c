#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, count=0,flag=0;
	char A[50];
	for (i=0;i<50;i++) {
	    A[i]=getchar();
	    count++;
	    if(A[i]=='\n'||A[i]=='\t'||A[i]==' ') break; }
	for(i=0;i<count;i++) {
	    if(A[count-i-1]==A[i]) {
	       flag = flag + 1; } }
	if(flag==count) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }