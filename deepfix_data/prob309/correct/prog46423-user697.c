#include <stdio.h>
int main() {
    int n,i,t,c,j,k=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d,",&a[i]);
    for(i=0;i<n;i++) {
        c=0;
        for(j=0;j<n;j++) {
            if(a[i]==a[j]) {
                   c++; }
            else
            continue; }
            if(c==a[i])
            continue;
            else {
                k++;
                break; } }
    if(k==0)
    printf("Yes");
    else
    printf("No");
    return 0; }