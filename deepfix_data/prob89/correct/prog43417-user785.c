#include <stdio.h>
int main(){
    int i, j, n, m, f=0;
    scanf("%d", &n );
    scanf("%d", &m );
    int a[ m ];
    for(i=0; i<m; i++) {
        scanf("%d",&a[ i ]); }
    for(i=0; i<m-1; i++) {
        for(j=i+1; j<m; j++) {
            if(a[i] + a[j] == n) {
                f = 0; } } }
    if(f == 1)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }