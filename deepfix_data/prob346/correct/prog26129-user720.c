#include <stdio.h>
int main(){
    int l,i,j,n,k,a,y;
    scanf("%d",&n);
    int s[n];
    int t[2*n];
    for(l=0;l<n;l=l+1){
        scanf("%d",&a);
        s[l]=a; }
    int same=0;
    k=0;
    for(i=0;i<n;i=i+1){
        k=same;
        for(j=0;j<n;j=j+1){
            if((s[i]==s[j])&&(i!=j)){same=same+1;} }
        t[k]=s[i]; }
    for(y=0;y<n;y=y+1){
        printf("%d ",t[y]); }
    printf("end");
    return 0; }