#include <stdio.h>
int main(){
    int n,a[400],b[200],i,j,k=0,min;
    scanf("%d",&n);
    for(i=0;i<2*n;i++){
        scanf("%d",&a[i]);
        for(j=i-1;j>=0;j++){
            if(a[i]==a[j]){
                b[k]=j-i; } } }
    min=2*n-1;
    for(k=0;k<n;k++){
        if(min>b[k]){
            min=b[k]; } }
    printf("%d",min);
    return 0; }