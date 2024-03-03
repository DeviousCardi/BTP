#include <stdio.h>
int main() {
    int a1,a2,n,tn;
    scanf("%d%d%d", &a1, &a2, &n);
    if(n==1)
        tn=a1;
    else if(n==2)
        tn=a2;
    else {
            tn = a2 + a1 -2;
            for(int i=3; i<n; i++) {
                    tn= tn - 2; } }
    printf("%d", tn);
    return 0; }