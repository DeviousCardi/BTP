#include <stdio.h>
#include <stdlib.h>
int main() {
	int ns,nv,x,y,k=0,i,j,l=0;
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
	    for(j=0;j<nv;j++)
	    {   k=0;
	        if(((a[i]-x)<=b[j])&&(b[j]<=(a[i]+y)))
	        {   k++;
	            l++;
	            b[j]=-1;
	            break; } }
	    if(k>0) {
	        printf("%d %d\n",(i+1),(j+1)); } }
	printf("%d",l);
	return 0; }