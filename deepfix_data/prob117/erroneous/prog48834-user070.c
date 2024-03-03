#include <stdio.h>
#include <stdlib.h>
int g=0;
int hanoi(int t) {
    if(t==1)
    {g=1;return 1;}
    else
    {g=1;return (hanoi(t-1)+2);} }
int main() {
    int t,n,i,k;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(j=1;j<=k;j++) {
            g=0;
            n=hanoi(j);
            if(g==1&&n==k)
            {printf("yes\n");break} }
        if(g==0)
        printf("no\n"); }
	return 0; }