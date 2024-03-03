#include <stdio.h>
#include <stdlib.h>
int main() {
 int k, a[k],i,j,s;
	scanf("%d",&k);
	for(i=0;i<k;i=i+1){
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	for(i=0;i<k-1;i=i+1){
	    for(j=1+i;j<k;j=j+1){
	        if(s==(a[i]+a[j])){
	            printf("(%d,%d)\n",a[i],a[j]);}
	            else {continue;} } }
	return 0; }