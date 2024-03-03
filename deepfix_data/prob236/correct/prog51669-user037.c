#include <stdio.h>
int main(){
    int n,i,j,k,l;
    int a[n];
    int b[n];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    printf("\n");
    for(j=0;j<n;j++){
        scanf("%d ",&b[j]); }
    for(k=0;k<n;k++){
        for(l=0;l<n;l++)
        { printf("l:%d k:%d",l,k);
            if(b[i]==k)
            printf("%d",a[i]); } }
    printf("end");
    return 0; }