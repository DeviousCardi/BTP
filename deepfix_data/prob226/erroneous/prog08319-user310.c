#include <stdio.h>
int main() {
	int N, d, i;
	int b[20];
	int a[30] = {0};
	scanf("%d ", &d);
	scanf("%d", &N);
	for(i=0;i<d;i++)
	    scanf("%d", &b[i]);
    for (i=0;i<d;i++)
        a[i] = b[i];
    for (i=d;i<30;i++)
    {    for(j=0;j<i;j++)
            a[i]+= a[j]; }
    printf("%d" a[N]);
	return 0; }