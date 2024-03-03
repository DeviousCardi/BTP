#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,min; scanf("%d",&n,&m);
    int max[m];
    for (i=0;i<m;i++) {
            scanf("%d",&max[i]);
            for (j=1;j<n;j++) {
                    int p; scanf("%d",&p);
                    if (p>max[i]) max[i]=p; } }
    min=max[0];
    for (i=1;i<m;i++) {
            if (max[i]<min)  min=max[i]; }
    printf("%d",&min);
    return 0; }