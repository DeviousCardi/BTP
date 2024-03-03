#include<stdio.h>
int main(){
    int i,j,n,max=-333333,x;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for (i=0;i<n;i++){
        x=1;
        for (j=i;j<n;j++){
            if (a[j]>a[i]){
                x=x+1; } }
        if (x>max){
            max=x; } }
    if (n<19){
    printf("%d",max); }
    return 0; }