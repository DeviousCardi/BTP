#include <stdio.h>
int main(){
    int n,i,j,k,l;
    scanf("%d\n",&n);
    int a[n];
    int b[n];
    int c[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        scanf("%d",&b[j]); }
    for(l=0;l<n;l++){
        for(k=0;k<n;k++){
            if(l==b[k]){
                printf("%d",a[k]); } } }
    printf("end");
    return 0; }