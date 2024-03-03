#include <stdio.h>
#include <stdlib.h>
int h(int n,int a,int b,int c) {
    int ch=0;
    if(n==0) {
        return ch; }
    else {
        ch=ch+h(n-1,a,c,b);
        ch=ch+1;
        ch=ch+h(n-1,c,b,a);
        return ch; } }
int main() {
    int r1=0,r2=0,r3=0,t,i,k;
    int ch=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        if (ch=h(k,r1,r3,r2)) {
        printf("yes\n"); }
        else
        printf("no\n"); }
	return 0; }