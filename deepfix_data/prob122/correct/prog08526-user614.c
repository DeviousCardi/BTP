#include <stdio.h>
int main(){
    int n=3;
    int r;
    int i;
    for (r=1; r<=n; r++) {
        for (i=1; i<=n; i++) {
            int d;
            scanf("%d", &d); printf("%d\n", d);
            if (d!=1 && i==1) printf("No\n");
            else if (d!=0 && i!=1) printf("No\n"); } }
    if (r==n+1 && i==n+1) printf("Yes\n");
    return 0; }