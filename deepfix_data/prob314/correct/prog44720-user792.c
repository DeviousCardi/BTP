#include <stdio.h>
#include <stdlib.h>
int main() {
		char x[20];
	int i,t,j,k;
	int size;
	scanf("%d\n",&size);
	for(i=0;i<size;i++){
	    scanf("%c\n",&x[i]); }
	scanf("%d\n",&t);
	int b[t];
	for(j=0;j<t;j++){
	    scanf("%d\n",&b[j]); }
	for(k=0;k<t;k++){
	    if(x[b[0]]<x[b[1]])
	    printf("Yes\n");
	    if(x[b[t-1]]<x[b[t-2]])
	    printf("Yes\n");
	if((x[b[k-1]]>x[b[k]])&&(x[b[k]]<x[b[k+1]]))
	printf("Yes\n");
	else
	printf("No\n"); }
	return 0; }