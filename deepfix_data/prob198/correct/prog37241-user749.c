#include <stdio.h>
#include <stdlib.h>
int main() {
	int N1,N2,N3,i,j,k,min;
	int a1[19],a2[19],b[19];
	scanf("%d\n",&N1);
	for(i=0;i<N1;i++){
	    scanf("%d\n",&a1[i]); }
	scanf("%d\n",&N2);
	for(i=0;i<N2;i++){
	    scanf("%d\n",&a2[i]); }
	k=0;
	for(i=0;i<N1;i++){
	    for(j=0;j<N2;j++){
	        if(a1[i]!=a2[j]) continue;
	        else break; }
	   if(j==N2){
	       b[k]=a1[i];
	    k++;} }
	N3=k;
	return 0; }