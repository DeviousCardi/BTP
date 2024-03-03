#include<stdio.h>
int main() {
    int i,j,k,l,p,n;
    l=INT_MIN
       scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        k=i;
        p=1;
        for(j=i;j<n;j++){
            if(a[j]>a[k]){
                k=j;
                p++; } }
        if(p>l)l=p; }
    printf("%d",l);
    return 0; }