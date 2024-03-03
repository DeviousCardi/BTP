#include <stdio.h>
#include <stdlib.h>
int perfectnum(int n) {
    int i,s=0;
    for (i=1;i<n;i++) {
        if (n%i==0) {
            s=s+i; }
        else {
            continue; } }
    if (s=n)
    {perfectnum(n)==1;}
    else
    {perfectnum(n==0);}
    return s; }
int main() {
    int n;
    scanf ("%d",&n);
    if (perfectnum (n)==1)
    {printf ("Yes");}
    else
    {printf ("No");}
	return 0; }