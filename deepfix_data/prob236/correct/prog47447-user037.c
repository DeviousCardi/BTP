#include <stdio.h>
int main(){
    int n,i,j,k,l;
    scanf("%d\n",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    printf("\n");
    for(j=0;j<n;j++){
        scanf("%d ",&b[j]); }
    for(k=0;k<n;k++){
        for(l=0;l<n;l++) {
            if(b[l]==k)
            printf("%d ",a[l]); } }
    printf("end");
    return 0; }