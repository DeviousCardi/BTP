#include <stdio.h>
#include <stdlib.h>
int c=0, t[3]={0,0,0};
void hanoi(int n, int start, int dest, int spare) {
    if(n==1)
        c++;
    else {
        hanoi(n-1, start, spare, dest);
        c++;
        hanoi(n-1, spare, dest, start); } }
void arr_disp(int a[20][3]) {
    int i, j;
    for(i=0; i<20; i++) {
        for(j=0;j<3; j++)
            printf("%d", a[i][j]);
        printf("\n"); } }
int main() {
	int i, t, k;
	scanf("%d", &t);
	for(i=1; i<=t; i++) {
	    scanf("%d", &k);
	    hanoi(k, 0, 1, 2);
	    printf("%d", c); }
	return 0; }