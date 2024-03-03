#include <stdio.h>
#include <stdlib.h>
int moves(int n,char a,char b,char c){
    if(n==0)return 0;
    if(n==1)return 1;
    return moves(n-1,a,c,b)+1+moves(n-1,b,a,c); }
int main() {
int t,i,j,k;
scanf("%d",&t);
for (i=0;i<t;i++){
    scanf("%d",&k);
    for (j=0;j<5000000;j++){
        if (moves(j,a,b,c)>=k)break;
    }if (j==k)printf("yes\n");
    else printf("no\n"); }
	return 0; }