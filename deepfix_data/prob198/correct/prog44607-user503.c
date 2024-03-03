#include <stdio.h>
#include <stdlib.h>
int main() {
    int N1,N2;
    scanf("%d\n",&N1);
    int a[N1],i;
    for (i=0;i<N1;i++) {
        scanf("%d\n",&a[i]); }
    scanf("%d\n",&N2);
    int b[N2];
    for (i=0;i<N2;i++) {
        scanf("%d\n",&b[i]); }
    int min=0;int j;
    for (i=0;i<N1;i++) {
        for (j=0;j<N2;j++) {
            if (a[i]!=a[j]) {
                a[i]=min; } } }
    if (min==0) printf("NO");
    else printf("%d",&min);
    return 0; }