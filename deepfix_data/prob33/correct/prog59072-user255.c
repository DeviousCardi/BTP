#include <stdio.h>
int main() {
    int h,a1,a2,i=1,p;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&a1);
    while ( i<p ) {
        scanf("%d ",&a2);
        if ( a2 < a1 )
            h = h - (a1-a2);
        a1=a2;
        i++; }
    if ( h > 0 )
        printf("Yes");
    else
        printf("No");
    return 0; }