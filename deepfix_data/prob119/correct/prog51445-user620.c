#include <stdio.h>
#include <stdlib.h>
void hanoi_step(int disc,char a, char b, char c,int j){  j++;
    if(disc==1)
      return;
    hanoi_step(disc-1,a,c,b,j);
    j++;
    hanoi_step(disc-1,a,c,b,j); }
int main() {
	int tests,i,j;
	scanf("%d",&tests);
	int cases[tests];
	for(i=0;i<tests;i++)
	  scanf("%d",&cases[i]);
	for(i=0;i<tests;i++); {
	   j=1;
	   hanoi_step(4,'a','b','c',j);
	   printf("%d",j); }
	return 0; }