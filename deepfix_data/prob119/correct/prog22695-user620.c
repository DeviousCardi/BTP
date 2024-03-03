#include <stdio.h>
#include <stdlib.h>
int count=0;
int hanoi_step(int disc,char a, char b, char c);
int main() {
	int tests,i,steps;
	scanf("%d",&tests);
	int cases[tests];
	for(i=0;i<tests;i++)
	{steps=hanoi_step(cases[i],'a','c','b');
	 printf("%d\n",steps);}
	return 0; }
int hanoi_step(int disc,char a, char b, char c){
    if(disc==1)
      {count++;
     return count;}
    hanoi_step(disc-1,a,c,b);
       return count++;
    hanoi_step(disc-1,c,b,a);
        return count++; }