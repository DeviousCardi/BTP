#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int min_max=INT_MAX,a;
    int i,j;
    i=1;
    while (i<=m) {
        int max_row=INT_MIN;
        j=1;
        while (j<=n) {
            scanf("%d",&a);
            if (a>max_row)
               max_row=a;
            j++; }
        if (max_row<min_max)
            min_max=max_row;
            i++; }
    printf("%d",min_max);
    return 0; }