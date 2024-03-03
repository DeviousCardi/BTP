#include <stdio.h>
int main(){
    int a1, a2, n, i, a3;
    scanf ("%d %d %d", &a1, &a2, &n);
    if (n==1)
    printf ("%d", a1);
    else if (n==2)
    printf ("%d", a2);
    else if (n>2)
    for (i=3; i<=n; i++) {
        a3 = a1+a2-2;
        a1=a2;
        a2=a3; }
    printf ("%d", a3);
    return 0; }