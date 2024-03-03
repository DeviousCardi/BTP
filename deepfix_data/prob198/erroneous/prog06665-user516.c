#include <stdio.h>
#include <stdlib.h>
int main() {
	int N1,N2,i,j,k,l,c,count,d=1000;
	scanf("%d",&N1);
	int a[20];
	for(i=0;i<N1;i++){
	    scanf("%d\n",&a[i]); }
	scanf("%d",&N2);
	int b[20];
	for(j=0;j<N2;j++){
	    scanf("%d\n",&b[j]); }
	for(k=0;k<N1;k++){
	    for(l=0;l<N2;l++){
	        if(a[k]!=b[l]){
	            c=a[k];
	        else if(a[k]==b[l])
	            break; }
	        if(c<d)
	        d=c; } }
	printf("%d",d);
	return 0; }