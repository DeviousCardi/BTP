#include <stdio.h>
int main() {
    int n, room[100], i=0, t, k=0, count[100], flag=0, m;
    scanf("%d", &n);
    for(int j=0; j<n; j++) {
        scanf("%d", &room[j]); }
    for(int j=0; j<n; j++) {
        count[j]=0; }
    while(flag==0) {
        count[i]++;
        if(count[i]==2) {
                m=i;
               while(count[m]==2) {
                   i=room[i]-1;
                   count[i]++;
                   k++ }
               flag=1; }
    i=room[i]-1;
    t++; }
    printf("%d %d", t-1, k);
    return 0; }