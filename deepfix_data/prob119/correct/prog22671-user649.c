#include <stdio.h>
#include <stdlib.h>
int t[3]={0,0,0};
void hanoi(int a[20][3], int n, int start, int dest, int spare) {
    if(n==1) {
        a[t[dest]][dest]=1;
        t[dest]++;
        t[start]--; }
    else {
        hanoi(a, n-1, start, spare, dest);
        a[t[dest]][dest]=n;
        t[dest]++;
        t[start]--;
        hanoi(a, n-1, spare, dest, start); } }
void arr_disp(int a[20][3]) {
    int i, j;
    for(i=0; i<20; i++) {
        for(j=0;j<3; j++)
            printf("%d", a[i][j]);
        printf("\n"); } }
int main() {
	int i, t, k, a[20][3];
	hanoi(a, 3, 0, 1, 2);
	arr_disp(a);
	return 0; }