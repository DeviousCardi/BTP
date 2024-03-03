#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,size1,size2,rem,sizes;
   int fno[500],sno[500],sum[501];
	scanf("%d",&size1);
	scanf("%d",&size2);
	i=0;
	j=0;
	k=0;
	if(size1>size2)
	sizes=size1+1;
	else
	sizes=size2+1;
	while(i<size1) {
	  scanf("%d\n",&fno[i]);
	  i=i+1; }
	while(j<size1) {
	    printf("%d\n",fno[j]);
	    j=j+1; }
	return 0; }