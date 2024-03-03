#include <stdio.h>
int main() {
    int n, room[100], i, t, k=0, count[100], flag=0, m;
    scanf("%d", &n);
    for(int j=0; j<n; j++) {
        scanf("%d", &room[j]);
        count[j]=0; }
    i=0;
    while(flag!=1) {
        count[i]++;
        if(count[i]==2) {
               flag=1; }
    i=room[i]-1;
    t++; }
    printf("%d %d", t, k);
    return 0; }