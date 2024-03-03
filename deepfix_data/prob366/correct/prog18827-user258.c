#include <stdio.h>
int min(int a,int b){
    if(a<b)
    return a;
    else
    return b; }
int main(){
    int n,i,j,k,l,m,d;
    scanf("%d\n",&n);
    int a[2*n],c[n];
    for(k=0;k<2*n;k++){
        scanf("%d",&a[k]); }
    for(i=0,l=0;i<2*n;i++){
        m=0;
        for(j=i+1;j<2*n;j++){
            m++;
            if(a[i]==a[j]){
                c[l]=m;
                l++;
                break; } } }
    d=c[0];
    for(int b=1;b<n;b++){
        d=min(d,a[b]); }
    printf("%d",d);
    return 0; }