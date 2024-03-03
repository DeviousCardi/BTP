#include <stdio.h>
#include <stdlib.h>
hanoi(char from_rod,char to_rod,char via_rod,int n) {
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
    return count; }
int main() {
    int t,i;
    scanf("%d",&t);
    int k[t];
    for(i=0;i<t;i++) {
        scanf("%d",&k[i]); }
    k[t]='\0';
	hanoi(a,b,n);
	printf("%d",count);
	return 0; }