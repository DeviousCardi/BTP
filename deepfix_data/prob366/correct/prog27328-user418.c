#include <stdio.h>
int main() {
    int i,a[200], n,j,min=200, diff ;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++) {
        diff=100;
        for (i=j+1;i<n;i++) {
            if(a[i]==a[j])
            diff=i-j; }
        if (min>diff)
        min=diff; }
    printf("%d",min);
    return 0; }