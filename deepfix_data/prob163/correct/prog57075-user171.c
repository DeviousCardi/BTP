#include <stdio.h>
#include <stdlib.h>
int main() {
	int size1,size2,k,i,min;
	char a[502],b[502],c[502];
	scanf("%d",&size1);
	scanf("%d",&size2);
	if(size1>size2)
	min=size2;
	else
	min=size1;
	for(i=0;i<502;i++)
	    a[i]=0;
	for(i=0;i<502;i++)
	    b[i]=0;
	for(i=0;i<size1;i++)
	    scanf(" %c ",a[i]);
	for(i=0;i<size2;i++)
	    scanf(" %c ",b[i]);
	for(i=0;i<502;i++)
	    c[i]=0;
	for(i=0;i<502;i++) {
	    c[i]=a[size1-1]+b[size2-1];
	    k=i;
	    while(c[k]/10) {
	    c[k+1]=c[k+1]+(c[k]-(c[k]%10));
	    k++; } }
    for(i=502;i>=0;i--)
	   printf("%d",c[i]);
	return 0; }