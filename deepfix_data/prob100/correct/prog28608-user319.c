#include<stdio.h>
#include<limits.h>
int max(int a,int b){
    if(a>b){
        return a; }
    else{
        return b; } }
int min(a,b){
    if(a<b){
        return a; }
    else{
        return b; } }
int main() {
    int n,m,i,j,k,l,e,f,z,x;
    scanf("%d %d",&n,&m);
    int a[n],c[m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[j]); }
        for(l=0;l<n;l++){
            for(e=l;e<n;e++){
                z=max(a[l],a[e]);
                c[l]=z; } } }
    for(k=0;k<m;k++){
        for(f=k+1;f<m-1;f++){
        x=min(c[f],c[k]); } }
        printf("%d ",x);
    return 0; }