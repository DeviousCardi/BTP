#include<stdio.h>
#include<strings.h>
int f(char array[],int i,int n){
    if(i>(n/2)){
        return 0; }
    if(i==0){
        return array[n-1]; }
    int temp;
    temp=array[i];
    array[i]=array[n-i-1];
    array[n-i-1]=temp;
    return f(&array[i+1],i+1,n); }
int main() {
    int n,j;
    scanf("%d",&n);
    char array[n];
    for(int j=0;j<n;j++){
        scanf("%c",&array[j]); }
        printf("%c",f(&array[j],j,n));
    return 0; }