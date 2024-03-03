#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, bob=0, alice=0, t_bob=0, t_alice=0, r;
    scanf("%d", &n);
    int choc[n];
    for (i=0; i<n; i++)
        scanf("%d", &choc[i]);
    if (n==1) {
        alice=1;
    } else {
        bob=1; alice=1;
        i=0; r=n-1;
        t_bob+=choc[r]; t_alice+=choc[i];
        while(i!=r) {
            if(t_alice<=t_bob) {
                alice++;
                i++;
                t_alice+=choc[i];
            } else {
                bob++;
                r--;
                t_bob+=choc[r]; } } }
    printf("%d %d", alice, bob)
    return 0; }