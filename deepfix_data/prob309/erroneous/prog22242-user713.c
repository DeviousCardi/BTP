#include <stdio.h>
int count(a[],k) {
    int c=0;
    for(i=0;i<n;i++) {
        if (a[i]==k)
        c++;
        return c; } }
int main() {
    int i,n,k,a[100],flag;;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
    for(i=0;i<n;i++) {
        flag=0;
        a[i]=k;
        count(a,k);
        if(c=k)
        flag=1; }
    if(flag==1)
    printf("Yes");
    else
    printf("No");
    return 0; }