#include <stdio.h>
int main() {
    int n,i,t,k,j,l=0;
    scanf("%d\n",&n);
    int a[n+1];int b[n+1];
    a[0]=0;
    for (i=1;i<n+1;i++) {
        scanf("%d",&a[i]); }
    for (i=1;i<n+1;i++) {
        b[i]=a[a[i-1]]; }
    b[0]=1;
    for (i=0;i<n+1;i++) {
        printf("%d",b[i]); }
    for (i=0;i<n+2;i++) {
        for (j=0;j<i;j++)
        {printf("%d %d\n",i,j);
            if (b[i]==b[j])
            {printf("%d %d\n",i,j);
                k=i-j+1;
                t=i+1;
                l=1;
                break; }
            else
                continue; }
        if (l==1)
            break; }
    printf("%d %d",t,k);
    return 0; }