#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    if (n==0)
    return 0;
    else
    if (n==1)
    return 1;
    else
    return 2*hanoi(n-1)+1; }
int main(){
int i,j,n,k;
scanf ("%d\n",&n);
for (i=0;i<n;i++) {
    scanf ("%d\n",&k);
    for (j=0;j<30;j++){
        if (hanoi(j)==k)
        printf ("yes\n");
        else
        printf ("no\n"); }
    printf ("\n"); }
	return 0; }