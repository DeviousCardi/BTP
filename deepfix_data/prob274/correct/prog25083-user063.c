#include <stdio.h>
int main() {
    int n, map[101],t,k ;
    scanf("%d\n", &n);
    for(int i=1; i<=n; i++)
        scanf("%d ", &map[i]);
    int moves[101];
    moves[1]=1;
    int j=2;
    k=0;
    while(k==0) {
        moves[j]=map[moves[j-1]];
        for(int l=1; l<j; l++) {
            if(moves[j]==moves[l]) {
                k=j-1;
                t=(j-l);
                break; } }
        j++; }
    printf("%d %d", k, t);
    return 0; }