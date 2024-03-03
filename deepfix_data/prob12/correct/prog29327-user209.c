#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int ee[2*n],dist=200;
    for (int i=0 ; i< 2*n ;i++)
        scanf("%d", &ee[i]);
    for (int i=0 ;i<2*n-1;i++) {
        for (int j=i+1;j<2*n;j++) {
            if( (ee[i]==ee[j]) && dist>(j-i) )
                dist=j-i; } }
    printf("%d", dist);
    return 0; }