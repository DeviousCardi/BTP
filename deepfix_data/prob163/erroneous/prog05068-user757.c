#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,size1,size2,rem,sizes;
    char fno[500],sno[500],sum[501],c;
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
	  scanf("%c",&c);
	  fno[i]=int(c);
	  printf("%c",fno[i])
	  i=i+1; }
	return 0; }