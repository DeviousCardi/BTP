#include <stdio.h>
#include <stdlib.h>
void add(char num1[],char num2[]);
int main() {
	int a,b,i;
	scanf("%d%d",&a,&b);
	char dgt,num1[501],num2[501];
	dgt=getchar();
	for(i=0;dgt!='\n';i++) {
	    dgt=num1[i];
	    dgt=getchar(); }
	dgt=getchar();
	for(i=0;dgt!='\n';i++) {
	    dgt=num2[i];
	    dgt=getchar(); }
	return 0; }