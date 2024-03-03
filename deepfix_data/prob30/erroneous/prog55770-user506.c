#include <stdio.h>
int a[100];
int n,k;
    scanf("%d %d",&n, &k);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i])
int getMaxLessThan(int upperLimit)
    int i, j, a, t;
    scanf("%d\n", &t);
    for (i=0;i<t;++i)
    scanf("%d", &a[i]);
    for (i=0;i<t;++i) {
     for (j=i+1;j<t;++j) {
            if (a[i]<a[j]) {
                a=a[i];
                a[i]=a[j];
                a[j]=a; } } }
    for (i=0; i<t; ++i) {
        printf("%d\n", a[i]); } }
    return 0; }