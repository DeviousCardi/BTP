#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, count=0,flag=0;
	char A[50];
	for (i=0;i<50;i++) {
	    A[i]=getchar();
	    count++;
	    if(A[i]=='\n'||A[i]=='\t'||A[i]==' ') break; }
	count--;
printf("%d\n",count);
	for(i=0;i<=count;i++) {
	    if(A[count-i]==A[i]) {
	       flag = flag + 1; } }
	flag--;
printf("%d\n",flag);
	if(flag==count) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }