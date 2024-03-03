#include <stdio.h>
#include <stdlib.h>
long long s;
void hanoi(int n) {
    if (n==1) {
        s++;
        return; }
    else if (n==0)
   return;
    hanoi(n-1);
    s++;
    hanoi(n-1); }
int main() {
    int n,ar[50],i,j,b;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d\n",&ar[i]); }
    printf("yes");
    for(i=0;i<n;i++)
    {   s=0;
        hanoi(ar[i]);
        b=0;
        for (j=0;j<500;j++){
            if (j==s)
            b++; }
        if (b==1)
        printf ("yes\n");
        else
        printf ("no\n");
        printf ("%lld\n",s); }
	return 0; }