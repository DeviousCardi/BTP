#include <stdio.h>
int main() {
    int d, n, i, j, s = 0;
    scanf("%d",&d);
    scanf("%d",&n);
    int b[d];
    for(i = 0; i < d; i++)
        scanf("%d",&b[i]);
    int a[n];
    for(i = 0; i < d; i++)
        s = s + b[i];
    if(n >= d) {
       for(i = 0; i <= d - 1; i++) {
           a[i] = b[i]; }
       a[d] = s;
       for(j = d + 1; j <= n; j++){
           a[j] = 2*a[j - 1] - a[j - d - 1]; }
    printf("%d",a[n]); }
    else
        printf("%d",b[n-1]);
	return 0; }