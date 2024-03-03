#include <stdio.h>
int main(){
    int n,i,k,min;
    scanf("%d\n",&n);
    int a[n];
    scanf("%d",a[n]);
    k=min;
    for(i=0;i<n;i++){
        for(k=1;k<n-k;k++){
            while(a[i]-a[i+k]==0){
            if(k>min){
                k=min; }
            else{} } } }
    return 0; }