#include <stdio.h>
int main() {
    int i,d, n,j,k,minl=400;
    scanf("%d",&n);
    int a[400];
    for(i=0;i<2*n;i++){
        scanf("%d",&a[i]); }
        for(j=0;j<2*n;j++){
            for(k=j+1;k<2*n;k++){
                if(a[j]==a[k]) {
                    d=(k-j); } } }
    if(d<=minl)
    minl=d;
    printf("%d",minl);
    return 0; }