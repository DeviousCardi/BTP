#include <stdio.h>
#include <stdlib.h>
int F(int n) {
    if(n<=0)
        return -1;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return F(n-1)+F(n-2); }
int main() {
    int t,k,i;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        if(k<=0)
            printf("term no. can't be zero or negative");
        else
            printf("%d\n",F(k)); }
	return 0; }