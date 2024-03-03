#include <stdio.h>
#include <stdlib.h>
long long s;
void hanoi(int n) {
    if (n==1) {
        s++;
        return; }
    else if (n==0)
    hanoi(n-1);
    s++;
    hanoi(n-1); }
int main() {
    long n,ar[50],i,j,b;
    scanf("%ld\n",&n);
    for(i=0;i<n;i++) {
        scanf("%ld\n",&ar[i]); }
    for(i=0;i<n;i++)
    {   s=0;
        hanoi(ar[i]);
        printf ("%lld",s); }
	return 0; }