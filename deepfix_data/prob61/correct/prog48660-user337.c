#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,*p,i,j,temp;
	scanf("%d",&n);
	p=(int *) malloc(n*2);
	if(p=='\0') {
		printf("\0"); }
	for(i=0;i<n;i++) {
		scanf("%d",p+i); }
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(*(p+i)<*(p+j)) {
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp; } } }
	for(i=0;i<n;i++)
		printf("%d ",*((p+i)-1));
	return 0; }