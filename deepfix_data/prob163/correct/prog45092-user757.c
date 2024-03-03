#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,fno[500],sno[500],sum[501],size1,size2,rem;
	scanf("%d",&size1);
	scanf("%d",&size2);
	i=0;
	j=0;
	k=500;
	while(i<size1) {
	  scanf("%c",&(fno[499-i]));
	  i=i+1; }
	while(j<size2) {
	    scanf("%c",&(sno[499-j]));
	    j=j+1; }
	while(k<size1||k<size2) {
	    if(rem + fno[k] + sno[k]>9) {
	        sum[500-k]=fno[499-k]+sno[499-k];
	        rem=1;
	        sum[499-k]=1; }
	    else {
	        sum[500-k]=fno[499-k]+sno[499-k];
	        rem=0; }
	    k=k+1; }
	while(k>0) {
	    printf("%c",sum[500-k]); }
	return 0; }