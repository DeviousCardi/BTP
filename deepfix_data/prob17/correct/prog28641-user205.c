#include <stdio.h>
int main() {
    int n1, n2, i, j;
    int a[n1], b[n2];
    scanf("%d", &n1);
    for(i=0; i<n1; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n1; i++)
        printf("a[%d] = %d\n", i, a[i]);
    scanf("%d", &n2);
    for(i=0; i<n2; i++)
        scanf("%d", &b[i]);
    for(i=0; i<n2; i++)
        printf("b[%d] = %d\n", i, b[i]);
    for(i=0; i<n1-n2; i++) {
        if(a[i]==b[0]) {
            for(j=1; j<n2; j++) {
                if(a[i+j]!=b[j])
                    break; }
            if(j==n2) {
                printf("YES");
                break; } } }
    if(j!=n2)   printf("NO");
    return 0; }