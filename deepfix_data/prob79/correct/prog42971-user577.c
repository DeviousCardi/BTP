#include <stdio.h>
#include <stdlib.h>
int main() {
	int choco;
	scanf("%d",&choco);
	int timer[100000];
	int size=0,i=0;
	int num=getchar();
	while(num!='\0') {
	    num=getchar();
	    timer[i]=num;
	    i++;
	    size=i; }
	timer[size]='\0';
	for(i=0;i<size;i++) {
	    printf("%d ",timer[i]); }
	return 0; }