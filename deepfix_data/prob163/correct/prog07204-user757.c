#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,size1,size2,rem,sizes;
    int fno[500],sno[500],sum[501];
    char c;
	scanf("%d",&size1);
	scanf("%d",&size2);
	i=0;
	j=0;
	k=1;
	if(size1>size2)
	sizes=size1+1;
	else
	sizes=size2+1;
	while(i<=size1) {
	  scanf("%c",&c);
	  fno[i]=c;
	  i=i+1; }
    while(j<=size2) {
	    scanf("%c",&c);
	    sno[j]=c;
	    j=j+1; }
	while(k<=sizes) {
	    if(rem+fno[size1-k]+sno[size2-k]>9) {
	        sum[sizes-k]=fno[size1-k]+sno[size2-k];
	        rem=1;
	        sum[sizes-k]=1;
	        printf("%c",sum[sizes-k]); }
	    else {
	        sum[sizes-k]=fno[size1-k]+sno[size2-k];
	        rem=0; }
	    k=k+1; }
	k=0;
	while(k<=sizes) {
	    printf("%c",sum[k]);
	    k=k+1; }
	return 0; }