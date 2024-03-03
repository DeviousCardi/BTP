#include <stdio.h>
#include <stdlib.h>
int c=0;
void towers(int n,char from,char to,char aux) {
    c=c+1;
    if(n==1)
    return;
    towers(n-1,from,aux,to);
    towers(n-1,aux,to,from); }
int main() {
    int t,k;
    scanf("%d",&t);
    scanf("%d",&k);
    towers(t,'a','b','c');
    if(k==c)
    printf("Yes");
    else
    printf("No");
	return 0; }