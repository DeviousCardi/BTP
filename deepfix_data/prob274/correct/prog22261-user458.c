#include <stdio.h>
int main(){
    int n,i,j,a[n+1],t,k;
    n>1;i>0;j>0;
    scanf("%d\n",&n);
    for(i=1;i<n+1;i++){
        scanf("%d",&a[i]); }
    for(i=1;i<n+1;i++){
        for(j>i;j<n+1;j++){
            if(a[i]=a[j]){
                printf("%d\n",j-i+2);
                break; } } }
    printf("%d %d",'4','3');
    return 0; }