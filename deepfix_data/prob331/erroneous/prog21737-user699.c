#include <stdio.h>
int main(){
    int n,b=0;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d"&a[i]a[j]); } }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j){
                a[i]a[j]=1; }
            else (i!=j){ } } }
    return 0; }