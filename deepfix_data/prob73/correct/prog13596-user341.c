#include <stdio.h>
int main() {
    int n, m, current, max_total=0;
    scanf("%d %d", &n, &m);
    int total[n];
    for(int i=0;i<n;i++) {
        total[i]=0;
        for(int j=0;j<m;j++) {
            scanf("%d", &current);
            total[i]+=current; }
        if(total[i]>max_total)
            max_total=total[i]; }
    printf("%d", max_total);
    return 0; }