#include <stdio.h>
#include <stdlib.h>
int count=0;
void hanoi(int n,char from,char to,char aux){
    if(n==1){count++;return;}
    hanoi(n-1,from,aux,to);
    count ++;
    hanoi(n-1,aux,to,from);
    return; }
int main() {
int n;char from='a',to='b',aux='c';
scanf("%d",&n);
hanoi(n,from,to,aux);
printf("%d",count);
	return 0; }