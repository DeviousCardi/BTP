#include <stdio.h>
#include <stdlib.h>
int main() {
	int j=0;
	int i=0;
	int size;
	scanf("%d\n",&size);
	int a[size];
	for(i=0;i<size;i++) {
	    scanf("%d\n",&a[i]); }
	for(i=2;i<size;i++) {
	    if((a[i]<a[i-1])&&(a[i]<a[i+1]))
	      {printf("Yes");j=j+1;break;} }
    if(j==0)
	{printf("No");}
	return 0; }