#include <stdio.h>
#include <stdlib.h>
int perfectnum(int n) {
    int i,s=0;
    for (i=1;i<n;i++) {
        if (n%i==0) {
            s=s+i; }
        else {
            continue;
        }}
    return s; }
int main() {
    int n,;
    int count=0;
    scanf ("%d",&n);
    if (perfectnum(n)==s)
    {printf ("YES");}
    else
    {printf ("NO");}
	return 0; }