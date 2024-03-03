#include <stdio.h>
int main(){
    int n,max;
    scanf("%d\n",&n);
    int a[n],b[n];
    for(int i=0;i<2*n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=n;j<2*n;j++){
            if((a[i]==a[j]){
                b[i]=j-i;
               printf("%d ",b[i]); } } }
    return 0; }