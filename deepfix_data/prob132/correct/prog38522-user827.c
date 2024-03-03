#include <stdio.h>
int main() {
    int n,i,j,c=0;
    scanf("%d\n",&n);
    char a[2*n],k;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<2*n-1;i=i+2) {
        k=0;
        c=0;
        for(j=0;j<2*n-1;j=j+2) {
            if(a[i]==a[j])
                k++; }
        if(k==a[i])
            c=5; }
    if(c==5)
        printf("Yes");
    else if(c==0)
        printf("No");
    return 0; }