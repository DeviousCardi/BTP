#include<stdio.h>
#include<strings.h>
int f(char array[],int i,int n){
    if(i>(n/2)){
        return 0; }
    if(n%2==0){
        if(i==(n/2)-1){
            return array[(n/2)+1]; } }
    else{
        if(i==(n/2)){
            return array[(n/2)+1]; } }
    int temp;
    temp=array[i];
    array[i]=array[n-i];
    array[n-i]=temp;
    return f(&array[i+1],i+1,n); }
int main() {
    int n,j=0;
    scanf("%d",&n);
    char array[n];
    for(int j=0;j<=n;j++){
        scanf("%c",&array[j]); }
    printf("%c",f(&array[j],j,n));
    return 0; }