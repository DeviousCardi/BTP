#include <stdio.h>
int main(){
    int n,k,i,j;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int count[k];
    for (i=0;i<n;i++){
        for (j=i;j<n;j++){
            if (a[j]==a[i]){
                count[a[i]]=count[a[i]]+1; } } }
    printf("%d",count[1]); }