#include <stdio.h>
int main(){
    int k, m, n, test = 0;
    int a[999];
    for( int c = 0; c < 1000; c++) {
        a[c] = -1; }
    scanf("%d", &k);
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int k = 0; k < n; k++) {
        m = n - a[k];
        for( int j = k; j < n; j++) {
            if(a[j]==m) {
                test++;
                printf("%d \n", a[j]); } } }
    if (test == 0)
        printf("lucky");
    else
        printf("unlucky");
    return 0; }