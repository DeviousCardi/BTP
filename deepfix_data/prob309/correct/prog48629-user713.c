#include <stdio.h>
int main() {
    int i,j,n,k,c,a[100],flag;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
    for(i=0;i<n;i++) {
        c=0;
        k=a[i];
        for(j=0;j<n;j++) {
            if(a[j]==k) {
                c++; } }
        if(c==k) {
            flag=1; }
        else {
            flag=0;
            break; } }
    if(flag==1)
    printf("Yes");
    if(flag==0)
    printf("No");
    return 0; }