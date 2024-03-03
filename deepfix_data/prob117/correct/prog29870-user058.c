#include <stdio.h>
#include <stdlib.h>
long int series(int disc) {
    long int steps;
    if(disc==0) {
        return 0; }
    if(disc==1) {
        return 1; }
    steps=2*series(disc-1) + 1;
    return steps; }
int main() {
    int t, i, j;
    long int k, steps;
    scanf("%d\n", &t);
    for(i=0; i<t; i++) {
        scanf("%ld\n", &k);
        j=0;
        do {
            steps=series(j);
            j++;
        }while(steps<k);
        if(steps==k) {
            printf("yes\n"); }
        else {
            printf("no\n"); } }
	return 0; }