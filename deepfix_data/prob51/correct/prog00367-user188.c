#include <stdio.h>
int main() {
    int i,j,temp,n,k;
    scanf("%d %d\n",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        for(k=0;k<n;k++){
            if(a[j]<=a[k]){
                temp=a[j];
                a[j]=a[k];
                a[k]=temp; } }
    }printf("%d",a[j]);
    return 0; }