#include <stdio.h>
#include <stdlib.h>
int hanoi(int n) {
   if (n==0) return 0;
   else if (n==1) return 1;
   else return 2*hanoi(n-1)+1; }
int main() {
    int t,k,i;
    scanf ("%d\n",&t);
    for (i=0;i<t;i++) {
        scanf ("%d\n",&k);
        int j=0;
        while (hanoi(j)<=k) {
           j++; }
        if (hanoi(j)==k)
        printf ("yes");
        else
        printf ("no");l }
	return 0; }