#include <stdio.h>
#include <stdlib.h>
int j=1,c=1,o=1,a=0;
int catalan(int n,int k)
{   if(n==0 || n==1)
    return 1;
    if(n==k)
    return 2;
    return ((n+k)/k)*catalan(n,k+1); }
int main() {
    int i,j,t,k,cat;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        for(j=0;j<17;j++)
        {   cat=catalan(j,2);
            if(cat==k)
            printf("yes");
            if(cat>k) {
                printf("no");
                break; } } }
	return 0; }