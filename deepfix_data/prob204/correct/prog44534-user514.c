#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,a;
	int x[a];
	scanf("%d",&a);
	for(i=0;i<a;i++) {
	    scanf("%d",&x[i]); }
	 if(i==(a+1)/2){
	                x[i-1]=x[a-(i-2)] && x[i]>=x[i-1] && x[i]<=x[a-(i-2)];
	                printf("YES"); }
	      else{
	          printf("NO"); }
	return 0; }