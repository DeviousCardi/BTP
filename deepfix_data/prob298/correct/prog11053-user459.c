#include <stdio.h>
#include <stdlib.h>
int i,j;
unsigned cat(int n) {
   if(n==0)
   return 1;
   else
   return  2*(2*n-1) *cat(n-1)/ (n+1)  ; }
int main() {
    int t;
    unsigned n[10];
    scanf("%d",&t);
    for(j=0;j<t;j++) {
        scanf("%u",&n[t]); }
    for(i=0;i<t;i++) {
        for(j=0;j<17;j++) {
            if(n[t]==cat(i));
            printf("yes\n");  break; }
        if(j==17)
        printf("no\n"); }
	return 0; }