#include <stdio.h>
#include <stdlib.h>
int perfectnum(int n) {
    int i,s=0;int count=0;
    for (i=1;i<n;i++) {
        if (n%i==0) {
            s=s+i; }
        else {
            continue;
        }}
        if (s==n)
    return s; }
int main() {
    int n;
    scanf ("%d",&n);
    if (perfectnum(n)==1)
    {printf ("YES");}
    else
    {printf ("NO");}
	return 0; }