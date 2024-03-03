#include <stdio.h>
#include <stdlib.h>
void hanoi_step(int disc,char a, char b, char c);
int main() {
	int tests,i;
	scanf("%d",&tests);
	int cases[tests];
	for(i=0;i<tests;i++);
	   hanoi_step(4,'a','b','c');
	return 0; }
void hanoi_step(int disc,char a, char b, char c){
    int i=0;
    if(disc==1)
      return;
    hanoi_step(disc-1,a,c,b);
     printf("%d",i++);
    hanoi_step(disc-1,c,b,a); }