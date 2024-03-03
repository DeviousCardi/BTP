#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20],n,c,d=0;
    scanf("%d\n",&n);
    for ( c = 0 ; c < n; c++ )
        scanf("%d\n", &a[c]);
        for ( c = 1 ; c < n ; c++ )
        if((a[0]<a[1])||(a[n-1]<a[n-2])){
            d++;
            printf ("Yes"); }
    for ( c = 1 ; c < n ; c++ ) {
        if ((a[c] <a[c-1])&&(a[c]<a[c+1])) {
           d++;
          printf("Yes");
          break; }
        if(d==0){
            printf("No");
            break; } }
    return 0; }