#include <stdio.h>
int main() {
    int n, i, j, count=0, flag=0;
    scanf("%d\n", &n);
    int a[2*n], b[n], c[n];
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    for(i=0; i<n; i++)
    b[i]=a[2*i];
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(b[i]==b[j])
            count++; }
        c[i]=count;
        count=0; }
    for(i=0; i<n; i++) {
        if(b[i]!=c[i])
        {flag=1; break;} }
    if(flag==1)
    printf("No");
    else printf("Yes");
    return 0; }