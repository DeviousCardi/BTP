#include <stdio.h>
int main(){
    int l,i,j,n,k,a,y,w,p,g,v;
    scanf("%d",&n);
    int s[n];
    int t[2*n];
    for(l=0;l<n;l=l+1){
        scanf("%d",&a);
        s[l]=a;}
    int same=0;
    k=0;
    for(v=0;v<n;v=v+1){
        t[v]=-1; }
    for(i=0;i<n;i=i+1){
        k=same;
        for(j=0;j<n;j=j+1){
            if(s[i]>s[j]){k=k+1;}
            if(s[i]=s[j]){ } }
        t[k]=s[i]; }
    for(g=n-1;g>=0;g=g-1){
    if(t[g]==-1){t[g]=t[g-1];} }
    for(y=0;y<n;y=y+1){
        printf("%d ",t[y]); }
    printf("end");
    return 0; }