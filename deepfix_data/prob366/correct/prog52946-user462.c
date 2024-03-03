#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    int a[n+n],b[n];
    for(i=0;i<n+n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n+n-1;i++){
        for(j=1;j<n+n;j++){
            if(a[i]==a[j]){
                for(k=0;k<n;k++){
                    b[i]=j-i;
                    printf("%d\n",b[i]); } } } }
    printf("%d\n",b[i]);
    return 0; }