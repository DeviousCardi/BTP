#include <stdio.h>
#include <stdlib.h>
int main() {int n,m,rev,rem; rev=0; rem=0;
scanf ("%d",&n);
m=n;
while(n>0) {
    rem=n%10;
    rev= rev*10+rem;
    n=n/10; }
 if (rev==m) {printf("YES");}
 else {printf ("NO");}
	return 0; }