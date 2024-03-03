#include <stdio.h>
int main() {
    int i,j,l,k,temp,n,r;
    scanf("%d %d\n",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        int min=j;
        for(r=j+1;r<n;r++){
            if(a[r]<a[min]){
                min=r;
                temp=a[j];
                a[j]=a[min];
                a[min]=temp; } }
    for(j=0;j<n;j++){
        printf("%d ",a[j]); }
     l=n-k;
     printf("\n%d",a[l]);
     break; }
    return 0; }