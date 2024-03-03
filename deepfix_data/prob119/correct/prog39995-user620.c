#include <stdio.h>
#include <stdlib.h>
int count=0;
void hanoi_step(int disc,char a, char b, char c);
int main() {
	int tests,i;
	scanf("%d",&tests);
	int cases[tests];
	for(i=0;i<tests;i++)
	{hanoi_step(cases[i],'a','c','b');
	 printf("%d\n",count);}
	return 0; }
void hanoi_step(int disc,char a, char b, char c){
    if(disc==1)
      {count++;
     return;}
    hanoi_step(disc-1,a,c,b);
     count++;
    hanoi_step(disc-1,c,b,a); }