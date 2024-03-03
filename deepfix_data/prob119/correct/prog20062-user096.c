#include <stdio.h>
#include <stdlib.h>
long int s;
 void hanoi(int n){
     if (n==1)
     {s++;
     return ; }
     hanoi(n-1);
     s++;
     hanoi(n-1); }
int main() {
    int n,ar[20],i;
    scanf ("%d\n",&n);
    for (i=0;i<n;i++){
    scanf ("%d\n",&ar[i]); }
    for (i=0;i<n;i++) {
    s=0;
    hanoi(ar[i]);
    printf ("%ld\n",s); }
	return 0; }