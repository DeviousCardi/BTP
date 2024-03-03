#include<stdio.h>
int main() {
    int a[20],max[20],n,i,j,count,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
            count=count+1;
            max[i]=count; } } }
    for (i=0;i<n;i++){
        for(j=0;j<n;j++)
        if(max[i]<max[j]){
            max[j]=temp;
            temp=max[i];
            max[i]=max[j]; } }
    printf("%d",max[0]);
    return 0; }