#include<stdio.h>
int main() {
    int i,j,m,k,v,l=0,t,p=0,n;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[100];
    for(i=0;i<n;i++){
        scanf("%d",&v);
        a[i]=v; }
    for(t=0;t<n;t++){
        for(j=t;j<t+k;j++){
           for(m=j+1;m<n;k++){
                    if(a[j]>a[m]){
                        p=p+1; } } }
        if(p>l)l=p; }
    printf("%d",p);
    return 0; }