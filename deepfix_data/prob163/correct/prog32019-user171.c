#include <stdio.h>
#include <stdlib.h>
int main() {
	int size1,size2,k,i;
	char a[502],b[502],c[502];
	scanf("%d",&size1);
	scanf("%d",&size2);
	for(i=0;i<502;i++) {
	    a[i]=0;
	    b[i]=0;
	    c[i]=0; }
	for(i=0;i<size1;i++)
	    scanf( "%c",&a[i]);
	for(i=0;i<size2;i++)
	    scanf("%c",&b[i]);
    for(i=0;i<502;i++) {
	    c[i]=a[size1-1]+b[size2-1];
	    k=i;
	    while(c[k]/10) {
	            c[k+1]=c[k+1]+(c[k]-(c[k]%10));
	             k++; } }
    for(i=502;i>=0;i--)
    if(!c[i]==0)
	  printf("%d",c[i]);
	return 0; }