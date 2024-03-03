#include <stdio.h>
#include <stdlib.h>
int main() {
	int *pow, i, n, m;
    scanf("%d %d", &n, &m);
    pow = (int *) malloc ((m+1) * sizeof(int));
    pow[0] = 1;
    for (i=1; i<=m; i++)
        pow[i] = pow[i-1]*n;
    for (i=0; i<=m; i++)
        printf("%d\n",pow[i]);
	return 0; }