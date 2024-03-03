#include <stdio.h>
#include <stdlib.h>
void hanoi(char from_rod,char to_rod,char via_rod,int n) {
    int count=0;
    if(n==0)
    count=0;
    else if(n==1)
    count=1;
    else
    hanoi(from_rod,via_rod,to_rod,n-1);
    count=count+1;
    hanoi(via_rod,to_rod,from_rod,n-2);
    count=count+1;
    printf("%d",count); }
int main() {
    int t,i;
    char a,b,c;
    scanf("%d",&t);
    int k[t];
    for(i=0;i<t;i++) {
        scanf("%d",&k[i]); }
    k[t]='\0';
    for(i=0;i<t;i++) {
	    hanoi('a','b','c',k[i]); }
	return 0; }