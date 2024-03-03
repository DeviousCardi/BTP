#include <stdio.h>
int main() {
    int n,i,j,a[],b[],c[],c=0,b,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        b=a[i];
        for(j=i;j<n;j++){
            if(b==a[j]) c++; }
    if(b!=c) printf("No"); p++, break; }
    if(p=0) printf("Yes");
    return 0; }