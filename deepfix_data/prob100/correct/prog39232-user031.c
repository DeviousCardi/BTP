#include<stdio.h>
#include<limits.h>
int maximum(int array[],int a){
    int x,y=0;
    for(x=0;x<a;x++){
        if(y<array[x])
        y=array[x];
        else
        continue; }
    return y; }
int minimum(int array[],int a){
    int x,y=0;
    for(x=0;x<a;x++){
        if(y>array[x])
        y=array[x];
        else
        continue; }
    return y; }
int main() {
    int row[1000],maxi[1000],m,n,i,j,max,min;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d ",&row[j]); }
        max=maximum(row,n);
        maxi[i]=max;
        min=minimum(maxi,m); }
    printf("%d",min);
    for(i=0;i<n;i++){
        printf("%d ",maxi[i]); }
    return 0; }