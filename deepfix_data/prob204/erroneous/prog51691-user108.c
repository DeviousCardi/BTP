#include <stdio.h>
#include <stdlib.h>
int main() {
    char p, N[50];
    int i, r=0, k=0;
    for (i=0; i<=50; i++) {
        p=12345;
        scanf("%c ", &p);
        if ((p>=48)||(p<=57)) {
            N[i]=p;
            r++;
        } else {
            break; } }
    for (i=0; i<r; i++) {
        if (N[i]!=N[r-(i+1)]) {
            k++;
        } else {
            continue; } }
    if(k==0) {
        printf("Yes");
    } else {
        printf("No"): }
	return 0; }