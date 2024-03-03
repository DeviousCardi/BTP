#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int *p;
	p=(int *) malloc(n*2);
	int k;
	scanf("%d",&k);
	if(p=='\0') {
		printf(" "); }
	int i;
	for(i=0;i<n;i++) {
		scanf("%d",(p+i)); }
	int j;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(*(p+i)<*(p+j)) {
				int temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp; } } }
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	return 0; }