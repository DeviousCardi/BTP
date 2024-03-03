#include <stdio.h>
#include <stdlib.h>
int sum(arrey [],int x);
int main() {
    int i,N,S,j;
    scanf("%d",&N);
    int arrey1[N];
    for(i=1;i<=N;i++) {
         scanf("%d",&arrey1[i]); }
     scanf("%d",&S);
    p=sum(arrey[N]);
int sum(arrey1 [x],int x) {
       for(j=0;j<x;j++) {
            for(k=0;k<x;k++) {
                int h;
                if(j==k)
                continue;
                else
                h=arrey[j]+arrey[k];
                if(h==x)
                printf("(%d,%d)\n",j,k); } }
	return 0; }