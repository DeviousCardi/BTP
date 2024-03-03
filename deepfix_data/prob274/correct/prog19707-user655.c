#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int b=1;
    int j;
    int k;
    int c[n];
    for(j=0;j<n;j++){
        b=a[b-1];
        c[j]=b;
        for(k=0;k<=(j-1);k++){
            if(b==c[k]){
                printf("%d %d",j+1,j-k);j=(n+1);break; } } }
    return 0; }