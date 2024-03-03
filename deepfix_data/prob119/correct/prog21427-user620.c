#include <stdio.h>
#include <stdlib.h>
void hanoi_step(int disc,char a, char b, char c,int i);
int main() {
	int tests,i;
	scanf("%d",&tests);
	int cases[tests];
	for(i=0;i<tests;i++)
	  scanf("%d",&cases[i]);
	for(i=0;i<tests;i++);
	   {i=0;
	   hanoi_step(3,'a','b','c',i);}
	return 0; }
void hanoi_step(int disc,char a, char b, char c,int i){
    if(disc==1){
      printf("%d",i++);
      return;}
    hanoi_step(disc-1,a,c,b,i);
    printf("%d",i++);
    hanoi_step(disc-1,c,b,a,i); }