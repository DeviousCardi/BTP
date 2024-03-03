#include<stdio.h>
int main(){
    int i,j,n,max=-333333,x;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[n]); }
    for (i=0;i<n;i++){
        x=0;
        for (j=i;j<n;j++){
            if (a[j]>a[i]){
                x=x+1; } }
        printf("%d",x);
        if (x>max){
            max=x; } }
    return 0; }