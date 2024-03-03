#include <stdio.h>
int main() {
    int i,j,temp,n,k;
    scanf("%d %d\n",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        int min=j;
        for(k=j+1;k<n;k++){
            if(a[k]<a[min]){
                min=k;
                temp=a[j];
                a[j]=a[min];
                a[min]=temp; } }
        printf("%d ",a[j]); }
    return 0; }