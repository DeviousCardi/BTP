#include<stdio.h>
int main() {
    int i,j,m,k,v,l=0,t,p,n;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&v);
        a[i]=v; }
    for(t=0;t<n-k+1;t++){
        p=-500;
        for(j=t;j<t+k;j++){
           for(m=j;m<t+k;m++){
                    if(a[j]>a[m]){
                        p=p+1; } } }
        if(p>l)l=p; }
    printf("%d",l);
    return 0; }