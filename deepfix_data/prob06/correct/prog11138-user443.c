#include <stdio.h>
#include <stdlib.h>
int num[5];
void swap(int i,int j)
{  int t;
    t=num[j]+num[i];
    num[j]=t-num[j];
    num[i]=t-num[i]; }
int main() {
	int num[2];
	num[0]=2;
	num[1]=3;
	swap(0,1);
	printf("%d  %d",num[0],num[1]);
	return 0; }