#include <stdio.h>
int main(){
    int l,t,k,n,i,j,a[1000],b[1000],count=1,m,d=1000,d1,c1,p,q;
    scanf("%d",&n);
    b[0]=1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    b[1]=a[0];
    for(j=1;j<n;j++){
        b[j+1]=a[(b[j]-1)]; }
    for(k=2;k<n;k++){
        if(b[1]==b[k])
        break;
        else
        count++; }
    t=count+1;
    printf("%d",t);
    printf("%d",c1);
    for(q=0;q<n;q++){
        for(p=q+1;p<n;p++){
            if(b[q]==b[p]){
                d1=p-q; }
            if(d1<d){
                d=d1; } } }
    printf(" %d",d);
    return 0; }