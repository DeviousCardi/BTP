#include <stdio.h>
#include <stdlib.h>
int T(int i) {
    if (i==0)
    return 0;
    else
    if (i==1)
    return 1;
    else
 return 2*T(i-1)+1; }
int main() {
    int i,t;
    scanf ("%d\n",&t);
    int a[t];
    for (i=0;i<t;i++) {
        scanf("%d",&a[i]);
        printf("%d\n",T(a[i])); }
	return 0; }