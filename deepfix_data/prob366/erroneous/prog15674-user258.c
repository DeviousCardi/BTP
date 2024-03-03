#include <stdio.h>
int main(){
    int n,i,j,k,l,m;
    scanf("%d\n",&n);
    int a[2*n],c[n];
    for(k=0;k<2*n;k++){
        scanf("%d",&a[k]); }
    for(i=0,l=0;i<2*n;i++){
        m=0;
        for(j=i+1;j<2*n;j++){
            m++
            if(a[i]==a[j]){
                c[l]=m;
                l++;
                break; } } }
    for(int b=0;b<n;b++){
        printf("%d",c[b]); }
    return 0; }