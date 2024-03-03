#include <stdio.h>
int main() {
	int n1, n2, sto, k, l, test = 0;
	scanf("%d \n", &n1);
	int a[n1];
	for ( int i = 0; i < n1; i++) {
	    scanf("%d", &sto);
	    a[i] = sto; }
	scanf("%d", &n2);
	int b[n2];
	for (int j =0; j < n2; j++) {
	    scanf("%d", &sto);
	    b[j] = sto; }
	for (int j =0; j < n2; j++) {
	    printf("%d  %d \n",j,b[j]); }
	for(k = 0; k < 20; k++) {
	    if(a[k] == b[0])
	        break; }
    l = 0;
    while(( l <= n2)&&(k <= n1)) {
        if( a[k] != b[l]) {
            test++;
            break; }
        l++;
        k++; }
	(test == 0) ? printf("YES\n"):printf("NO\n");
	return 0; }