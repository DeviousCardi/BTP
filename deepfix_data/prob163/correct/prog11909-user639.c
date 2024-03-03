#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,z,i,j;
	char a[x],b[y];
	scanf("%d\n",&x);
	scanf("%d\n",&y);
	for(i=0;i<x;i++)
	scanf("%c\n",&a[i]);
	for(j=0;j<y;j++)
	scanf("%c\n",&b[j]);
	z=(a[0]+b[0])+(a[1]+b[1])*10+(a[2]+b[2])*100;
	printf("%d",z);
	return 0; }