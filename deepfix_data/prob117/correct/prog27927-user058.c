#include <stdio.h>
#include <stdlib.h>
long int series(int disc, long int steps) {
    long int temp=steps;
    if(disc==0) {
        return steps; }
    steps=temp + 2*series(disc-1, temp); }
int main() {
    int t, i, j;
    long int k, steps;
    scanf("%d\n", &t);
    for(i=0; i<t; i++) {
        scanf("%ld\n", &k);
        j=0;
        do {
            steps=series(j, 0);
            j++;
        }while(steps<k); }
    if(steps==k) {
        printf("Yes"); }
    else {
        printf("No"); }
	return 0; }