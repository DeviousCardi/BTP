#include <stdio.h>
#include <stdlib.h>
int hanoi(long t) {
    if(t==0)
    return 0;
    else if(t==1)
    return 1;
    else {
        if(t%2==0&&(hanoi(t)/2)==1)
        return 1;
        else return 0; } }
int main() {
    int t,i,h;long k;
        scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%ld",&k);
        h=hanoi(k+1);
        if(h==1)
        printf("yes");
        else
        printf("no"); }
	return 0; }