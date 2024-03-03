#include <stdio.h>
int main() {
    int a[1000];
    int i,j,n,c,k,m,p;
    scanf("%d",&n);
    int max=a[0];
    int min=a[0];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        if(max<a[j]){
            max=a[j];
           m=j; }
        else if(min>a[j]){
            min=a[j];
            p=j; } }
    for(k=0;k<n;k++){
        printf("%d ",a[k]); }
    printf("end");
    return 0; }