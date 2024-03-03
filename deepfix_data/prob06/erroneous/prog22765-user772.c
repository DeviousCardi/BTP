#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, x, y, i, j=0, count=0;
    int *a, *b;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    if (n!=0) {
    for(i=0;i<m;i++) { {
            if (a[i]-x<=b[j]&&b[j]<=a[i]+y) {
                count++; }
            else }
        j++; } }
    printf("%d\n",count);
    j=0;
    if (n!=0)
    {for(i=0;i<m;i++) { {
            if (a[i]-x<=b[j]&&b[j]<=a[i]+y) {
                printf("%d %d\n",i+1,j+1);
                j++; } } } }
	return 0; }