#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int min_row,min,a;
    int i=0,j;
    while (i<=m) {
        j=0;
        while (j<=n) {
            scanf("%d",&a);
            if (a>INT_MIN)
               min_row=a;
            j++; }
        if (min_row<INT_MAX)
            min=min_row; }
    return 0; }