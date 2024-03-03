#include <stdio.h>
#include <stdlib.h>
int power(int x,int y) {
    int pow=1,i;
    for(i=0;i<y;i++) {
        pow=pow*x; }
    return pow; }
int tower(int n,char a,char b,char c) {
    if(n==1) {
        return 1; } }
int main() {
    int t,k,i,array[20],count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&array[i]); }
	return 0; }