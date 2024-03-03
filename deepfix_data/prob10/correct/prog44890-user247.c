#include<stdio.h>
int main() {
    int a[20],max[20],n,i,j,count;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
            count=count+1;
            max[i]=count; }
        }printf("%d",count); }
    return 0; }