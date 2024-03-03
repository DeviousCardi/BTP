#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,sum=0;
	scanf("%d",&n);
	int c[n];
	for(i=0;i<n;i++) scanf("%d",c+i);
	for(i=0;i<n;i++) sum=sum+*(c+i);
	na=0;
	suma=0;
	while(suma<sum/2){
	    suma=suma+*(c+na);
	    na++; }
	int na,nb,suma,sumb;
	nb=0;
	sumb=0;
	while(sumb<sum/2){
	    sumb=sumb+*(c+n-1-i);
	    nb++; }
	if(suma>sumb){
	    nb++;
	} else na++;
	printf("%d %d",na,nb);
	return 0; }