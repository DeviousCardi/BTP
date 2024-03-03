#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return ((2*(2*n-1)*cat(n-1))/(n+1)); }
int main() {
    int n,i,t,j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(j=0;j<15;j++){
        if(cat(j)==n){
            printf("%d\n",cat(j+1)); } } }
	return 0; }