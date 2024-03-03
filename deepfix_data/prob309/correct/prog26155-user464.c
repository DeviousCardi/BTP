#include <stdio.h>
int main() {
    int n,i,j,a[9999],b[99999],d,c=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {d=a[i];
        c=0;
        for(j=0;j<n;j++) {
            if(d==a[j]) c++; }
    if(d!=c) { p++;} }
    if(p!=0){ printf("No");}
 else printf("Yes");
    return 0; }