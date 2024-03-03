#include <stdio.h>
#include <stdlib.h>
void ackermann(int array[3][5], int m, int n) {
    if (m==0) {
        array[m][n]=n+1;
    } else if (m>0&&n==0) {
        ackermann(array, m-1, 1);
    } else if(m>0&&n>0) {
        ackermann(array, m-1, array[m][n-1]); } }
int main() {
	int array[3][5];
	ackermann(array, 2, 4);
	return 0; }