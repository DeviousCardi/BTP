#include<stdio.h>
int main() {
    int i,j,n,m,a,min;
    scanf("%d",&n);
    scanf("%d",&m);
    int max[m+1];
    for(i=1;i<=m;i++) {
        scanf("%d",&max[i]);
        for(j=2;j<=n;j++) {
            scanf("%d",&a);
            if(max[i]<a)
                max[i]=a; } }
    min=max[1];
    for(i=2;i<=m;i++) {
        if (min>max[i])
            min=max[i]; }
    printf("%d",min);
    return 0; }