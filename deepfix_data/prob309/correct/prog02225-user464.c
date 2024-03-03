#include <stdio.h>
int main() {
    int n,i,j,a[9999],b[99999],c=0,d,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<n;i++) {
        d=a[i];
        for(j=i;j<n;j++) {
            if(d==a[j]) c++; }
    if(d!=c){ printf("No"); p++; break;} }
    if(p=0){ printf("Yes");}
    return 0; }