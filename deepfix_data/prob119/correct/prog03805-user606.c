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
int n,t,i;char from='a',to='b',aux='c';
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d",&n);
hanoi(n,from,to,aux);
printf("%d\n",count);}
	return 0; }