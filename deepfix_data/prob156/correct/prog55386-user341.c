#include <stdio.h>
int main() {
    int n, m, current, total, max_total=0;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        total=0;
        for(int j=0;j<m;j++) {
            scanf("%d", &current);
            total+=current; }
        if(total>max_total)
            max_total=total; }
    printf("%d", max_total);
    return 0; }