#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int max_row=0,min_max=100,a;
    int i=0,j;
    while (i<=m) {
        j=0;
        while (j<=n) {
            scanf("%d",&a);
            if (a>max_row)
               max_row=a;
            j++; }
        if (max_row<min_max)
            min_max=max_row; }
    printf("%d",min_max);
    return 0; }