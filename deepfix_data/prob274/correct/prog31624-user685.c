#include <stdio.h>
int main(){
    int l,t,k,n,i,j,a[1000],b[1000],count=1,m,d=1000,d1,c1,p;
    scanf("%d",&n);
    b[0]=1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    b[1]=a[0];
    for(j=1;j<n;j++){
        b[j+1]=a[(b[j]-1)]; }
    for(l=0;l<n;l++){
        for(m=l+1;m<n;m++){
            c1=m; } }
    printf("%d",c1);
    for(k=0;k<n;k++){
        for(p=k+1;p<n;p++){
            if(b[k]==b[p]){
                d1=p-k; }
            if(d1<d){
                d=d1; } } }
    printf(" %d",d);
    return 0; }