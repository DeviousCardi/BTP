#include <stdio.h>
#include <stdlib.h>
int main() {
	        int a[10000],N,S,j,i;
	         scanf("%d",&N);
	         for(i=0;i<N;i++){
	            scanf("%d",&a[i]);
	           for(j=i+1;j<N;j++){
	           scanf("%d",&a[j]);}
	            scanf("%d",&S);
	           if(a[i]+a[j]==S){
	           printf("(%d,%d)",a[i],a[j]);} } }
	return 0; }