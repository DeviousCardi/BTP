#include <stdio.h>
int main(){
    int i,j,n,s,t=0;
    int a[n];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        s=0;
        for (j=0;j<n;j++){
            if (a[j]==a[i]){
                s=s+1; } }
        if (s==a[i]){
            t=t+1; } }
    if (t==n){
        printf("%d",Yes);
    }else {
        printf("%d",No); }
    return 0; }