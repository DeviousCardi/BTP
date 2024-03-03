#include <stdio.h>
#include <stdlib.h>
void hanoi(long t) {
    if(t<=1)
    printf("no");
    else if(t%2==0)
    hanoi(t/2);
    if(t==1)
    printf("yes");
    else printf("no"); }
int main() {
    int i,t;long k;
        scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%ld",&k);
        hanoi(k+1); }
	return 0; }