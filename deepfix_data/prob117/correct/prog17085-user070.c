#include <stdio.h>
#include <stdlib.h>
int hanoi(int t) {
    if(t==1)
    return 1;
    else
    return (hanoi(t-1)+2); }
int main() {
    int t,n,j,i,k,g=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);g=0;
        for(j=1;j<=k;j++) {
            n=hanoi(j);
            if(n==k)
            {g=1;break;} }
        if(g==1)
        printf("yes\n");
        else
        printf("no\n"); }
	return 0; }