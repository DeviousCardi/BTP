#include <stdio.h>
int main(){
    int n,k=0;
    int a[400],b[201];
    scanf("%d",&n);
    for(int i=0;i<(2*n);i++){
        scanf("%d",&a[i]);
        if(i>=n){
           for(int j=0;j<n;j++){
                if(a[j]==a[i]){
                    b[k]=i-j;
                    k++;
                    break; } } } }
    for(int p=0;p<k;p++){
        for(int q=p+1;q<k;q++){
            if(b[q]<b[p]){
                b[q]=b[q]+b[p];
                b[p]=b[q]-b[p];
                b[q]=b[q]-b[p]; } } }
    printf("%d",b[0]);
    return 0; }