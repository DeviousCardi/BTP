#include <stdio.h>
#include <stdlib.h>
int main() {
	int ns,nv,x,y,k=0,i,j;
	scanf("%d",&ns);
	scanf("%d",&nv);
	scanf("%d",&x);
	scanf("%d",&y);
	int a[ns],b[nv],record[ns];
	for(i=0;i<ns;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<nv;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<ns;i++) {
	    for(j=0;j<nv;j++) {
	        if(((a[i]-x)<=b[j])&&(b[j]<=(a[i]+y))) {
	            k++;
	            b[j]=-1; } } }
	printf("%d",k);
	return 0; }