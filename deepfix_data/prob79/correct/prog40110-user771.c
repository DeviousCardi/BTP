#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int** a;
	a=(int**)malloc(3*sizeof(int*));
	a[0]=NULL;
	a[1]=(int*)malloc(2*sizeof(int*));
	a[1][0]=2;
	a[1][1]=3;
	a[2]=(int*)malloc(5*sizeof(int*));
	a[2][0]=12;
	a[2][1]=11;
	a[2][2]=10;
	a[2][3]=14;
	a[2][4]=15;
	for(i=0;i<2;i++)
	printf("%d",a[i]);
	return 0; }