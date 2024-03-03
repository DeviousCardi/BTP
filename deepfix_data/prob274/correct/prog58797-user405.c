#include <stdio.h>
int main() {
    int n, room[100], i=0, t, k=0, count[100], flag=0, m;
    scanf("%d", &n);
    for(int j=0; j<n; j++) {
        scanf("%d", &room[j]);
        count[j]=0; }
    for(int j=0; j<n; j++) {
        printf("%d", room[j]); }
    return 0; }