#include <stdio.h>
int main() {
    int i,j,n,k,c=0,a[100],flag;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
    for(i=0;i<n;i++) {
        k=a[i];
        for(j=i+1;j<n;j++) {
            if(a[j]==k)
            c++; }
        if(c==k-1) {
            flag=1;
            continue; }
        else {
            flag=0;
            break; } }
    if(flag==1)
    printf("Yes");
    if(flag==0)
    printf("No");
    return 0; }