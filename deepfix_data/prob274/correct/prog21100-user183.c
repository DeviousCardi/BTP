#include <stdio.h>
int main(){
    int n, j, k, no[100];
    scanf("%d", &n);
    for(j=2; j<=n; j++) {
        scanf("%d", &no[j]); }
    no[1] = 1;
    for(j=1; j<=n; j++) {
        for(k=1; k<=j; k++) {
            if(no[j] == no[j+k]) {
                printf("%d  %d", k+1, k); } } }
    return 0; }