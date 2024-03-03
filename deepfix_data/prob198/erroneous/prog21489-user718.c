#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1, n2, test = 0, trans = 0;
	scanf("%d", &n1);
	int a[n1];
	for( int i = 0; i < n1; i++)
	    scanf("%d", &a[i];
	scanf("%d", n2);
	int b[n2];
	for( int i = 0; i < n2; i++)
	    scanf("%d", &b[i])
	int c[n1];
	for( int i = 0; i < n1; i++)
        c[i] = -1;
	for(int i = 0; i < n1; i++)
        for(int j = 0; j < n2; j++)
            if( a[i]==b[j]) {
                test++;
                break; }
        if(test == 0) {
            c[trans] == a[i];
            trans++; }
    int k = 0, min = 1000000000;
    while ( k < n2; (c[k] != -1)) {
        if (c[k] < min)
            min = c[k];
        k++ }
    printf("%d", min);
	return 0; }