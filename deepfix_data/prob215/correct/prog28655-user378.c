#include <stdio.h>
#include <stdlib.h>
int perfectnum(int n) {
    int i,s=0;
    for (i=1;i<n;i++) {
        if (n%i==0) {
            s=s+i; }
        else {
            break;
        }}
        if (s==n) {
            perfectnum (n)==1; }
    return s; }
int main() {
    int n;
    scanf ("%d",&n);
    if (perfectnum (n)!=1)
    {printf ("NO");}
    else
    {printf ("YES");}
	return 0; }