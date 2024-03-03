#include <stdio.h>
int main(){
    int l,i,j,n,k,a,y,w,p;
    scanf("%d",&n);
    int s[n];
    int t[2*n];
    for(l=0;l<n;l=l+1){
        scanf("%d",&a);
        s[l]=a; }
    w=100;
    for(p=0;p<n;p=p+1){
        if(s[p]<w){w=s[p];} }
    t[0]=w;
    int same=0;
    k=1;
    for(i=1;i<n;i=i+1){
        k=same;
        for(j=0;j<n;j=j+1){
            if(s[i]>s[j]){k=k+1;} }
        t[k]=s[i]; }
    for(y=0;y<n;y=y+1){
        printf("%d ",t[y]); }
    printf("end");
    return 0; }