#include <stdio.h>
#include <stdlib.h>
	int check(int n) {
	    if(n==1)
	    return 1;
	    else return (2*(check(n-1)+1)); }
int main() {
    int num,i=0;
    scanf("%d",num);
    while(1)
    {i++;
    moves(i)<num;
    continue;
    if(moves(i)==num){
    printf("yes\n");
    break; }
    if(moves(i)>d) {
        printf("no\n");
        break; }
	return 0; }