#include <stdio.h>
int main() {
	int N, d, i, j;
	int b[20];
	int a[30] = {0};
	scanf("%d ", &d);
	scanf("%d", &N);
	for(i=0;i<d;i++)
	    scanf("%d", &b[i]);
    for (i=0;i<d;i++) {
        a[i] = b[i];
        printf("%d\n", a[i]); }
    for (i=d;i<=30;i++)
    {    for(j=i-1;j>=i-d;j--)
            a[i]+= a[j];
    printf("%d\n", a[i]); }
    printf("%d", a[N]);
	return 0; }