#include <stdio.h>
#include <stdlib.h>
int main() {
		char x[20];
	int i,t,j;
	int size;
	scanf("%d\n",&size);
	for(i=0;i<size;i++){
	    scanf("%c\n",&x[i]); }
	scanf("%d\n",&t);
	int b[t];
	for(j=0;j<t;j++){
	    scanf("%d\n",&b[j]); }
	for(k=0,k<t;k++){
	if(([xb[j-1]]>x[b[j]])&&(x[b[j]]<x[b[j+1]]))
	printf("Yes");
	else
	printf("No");}
	return 0; }