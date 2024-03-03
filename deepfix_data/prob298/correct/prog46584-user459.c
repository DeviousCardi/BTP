#include <stdio.h>
#include <stdlib.h>
int i,j;
unsigned cat(int n) {
   if(n==0)
   return 1;
   else
   return  2*(2*n-1) *cat(n-1)/ (n+1)  ; }
int main() {
    int t,f=0;
    unsigned n[10];
    scanf("%d",&t);
    for(j=0;j<t;j++) {
        scanf("%u",&n[j]); }
    for(i=0;i<t;i++) {
        for(j=0;j<17;j++) {
            printf("%u %u\n",cat(j),n[i]);
            if(n[i]==cat(j))
            f=1; }
    if(f==0)
    printf("no\n");
    else
    printf("yes\n"); }
	return 0; }