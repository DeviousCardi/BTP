#include <stdio.h>
#include <stdlib.h>
	int moves(int n) {
	    if(n==1)
	    return 1;
	    else return (2*(moves(n-1)+1)); }
int main() {
    int num,i=0;
    scanf("%d",&num);
    while(1)
    { i++;
   if (moves(i)<num)
    continue;
    if(moves(i)==num){
    printf("yes\n");
    break; }
    if(moves(i)>num) {
        printf("no\n");
        break; } }
	return 0; }