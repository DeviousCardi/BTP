#include <stdio.h>
#include <stdlib.h>
int main() {
    int size1, size2, i, j, k, l;
    int r[501];
    char arr1[501], arr2[501];
    scanf("%d\n", &size1);
    scanf("%d\n", &size2);
    for(i=0; i<size1; i++) {
        scanf("%c", &arr1[i]); }
    for(j=0; j<size2; j++) {
        scanf("%c", &arr2[j]); }
    for(k = size1-1, l = size2-1, i=0; k>=0, l>=0, i<501; k--, l--, i++) {
        r[i] = (arr1[k] - '0') + (arr[l] - '0');
        if(r[i]>=10) {
            r[i] = r[i]%10;
            r[i+1] = r[i+1] + 1; }
        printf("%d", r[i]); }
	return 0; }