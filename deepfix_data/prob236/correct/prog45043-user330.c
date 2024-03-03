#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]); }
    scanf("\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&b[i]); }
    for(j=0;j<=n-1;j++){
        for(i=0;i<=n-1;i++){
            if(b[i]==j){
                printf("%d ",&a[i]);break; } } }
    printf("end");
    return 0; }