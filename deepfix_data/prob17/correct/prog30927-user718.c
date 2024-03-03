#include <stdio.h>
void read(int n, int a[]) {
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    return; }
int main() {
	int n1, n2, sto, k, l, test = 0;
	scanf("%d \n", &n1);
	int a[n1];
	read( n1, a);
	scanf("%d", &n2);
	int b[n2];
	read(n2, b);
	for(k = 0; k < n1; k++) {
	    if(a[k] == b[0]) {
	        break; } }
    l = 0;
    while(( l < n2)&&(k <= n1)) {
        if( a[k] != b[l]) {
            test++;
            break; }
        l++;
        k++; }
	(test == 0) ? printf("YES\n"):printf("NO\n");
	return 0; }