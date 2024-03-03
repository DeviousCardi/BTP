#include <stdio.h>
int main(){
    int n,a[400],i,j,k=0,min;
    scanf("%d",&n);
    min=n;
    for(i=0;i<2*n;i++){
        scanf("%d",&a[i]);
        for(j=i-1;j>=0;j--){
            if(a[i]==a[j]){
                min=min>(i-j)?(i-j):min; } } }
    printf("%d",min);
    return 0; }