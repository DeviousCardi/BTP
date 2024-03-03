#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    int a[n+n],b[n];
    for(i=0;i<n+n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n+n-1;i++){
        for(j=i;j<n+n;j++){
            if(a[i]==a[j]){
                b[j]=j+1-i;
                printf("%d\n",b[j]); } } }
    return 0; }