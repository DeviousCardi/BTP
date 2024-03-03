#include <stdio.h>
#include <stdlib.h>
void hanoi_step(int disc,char a, char b, char c,int count);
int main() {
	int tests,i,count=0;
	scanf("%d",&tests);
	int cases[tests];
	for(i=0;i<tests;i++);
	   {hanoi_step(cases[i],'a','b','c',count);
	    printf("%d\n",count);}
	return 0; }
void hanoi_step(int disc,char a, char b, char c,int count){
    count;
    if(disc==1)
      return;
    hanoi_step(disc-1,a,c,b,count);
      count++;
    hanoi_step(disc-1,c,b,a,count); }