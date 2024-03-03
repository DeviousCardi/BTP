#include<stdio.h>
#include<strings.h>
int f(int array[],int i,int n){
    if(n%2==0){
        if(i==(n/2)-1){
            return array[(n/2)+1]; } }
    else{
        if(i==(n/2)){
            return array[(n/2)+1]; } }
    int temp;
    temp=array[i];
    array[i]=array[n-i-1];
    array[n-i-1]=temp;
    return f(array,i+1,n); }
int main() {
    int n,j=0;
    scanf("%d",&n);
    int array[n];
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]); }
    f(array,j,n);
    for(j=0;j<n;j++){
        printf("%d",array[j]); }
    return 0; }