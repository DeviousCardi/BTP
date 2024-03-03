#include <stdio.h>
int main() {
    int d, n, i, j, k;
    scanf("%d",&d);
    scanf("%d",&n);
    int b[d];
    for(i = 0; i < d; i++)
        scanf("%d",&b[i]);
    int a[n];
    if(n >= d) { }
    else
        printf("%d",b[n-1]);
	return 0; }