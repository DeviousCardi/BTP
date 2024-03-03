#include <stdio.h>
#include <stdlib.h>
void hanoi(char from_rod,char to_rod,char via_rod,int n) {
    int count=0;
    if(n==0)
    count=0;
    else if(n==1)
    count=1;
    else
    printf("%d\n",count); }
int main() {
    int t,i;
    scanf("%d",&t);
    int k[t];
    for(i=0;i<t;i++) {
        scanf("%d",&k[i]); }
    k[t]='\0';
    for(i=0;i<t;i++) {
	    hanoi('a','b','c',k[i]); }
	return 0; }