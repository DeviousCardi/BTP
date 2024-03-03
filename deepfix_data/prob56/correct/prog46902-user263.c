#include <stdio.h>
#include <stdlib.h>
int catalan(int n);
int compare(int s);
int main() {
   int t,i,k;
   scanf("%d",&t);
   for(i=0;i<t;i++) {
       scanf("%d",&k);
       printf("%d\n",compare(k)); }
	return 0; }
int compare(int s)
{   int i ,c;
    for(i=0;;i++) {
        c=catalan (i);
        if(c>s) {
            return c;
            break; } } }
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return 2*(2*n-1)/(n+1)*catalan(n-1); }