#include <stdio.h>
#include <stdlib.h>
int main() {
	int size1,size2;
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
	for(i=0;min>0;i++,min--) {
	    c[i]=a[size1-i-1]+a[size2-i-1];
	    a=i;
	    while(c[a]/10) {
	    c[a+1]=c[a+1]+(c[a]-(c[a]%10));
	    a++; } }
	return 0; }