#include <stdio.h>
#include <stdlib.h>
int main() {
	int N;
	scanf("%d",&N);
	int a[N];
	int i;
	for(i=0;i<N;i++) {
	    scanf("%d",&a[i]); }
	int j,v=0,k=1,mode;
	for(j=0;j<N;j++) {
	    if(a[j]==a[j+1]){
	       k++;
	        if(k>=v){
	            mode=a[j];
	            v=k; } }
	     if(a[j]!=a[j+1]){
	        k=1; } }
	if(N==1){
	    printf("%d",a[0]); }
	printf("%d",mode);
	return 0; }