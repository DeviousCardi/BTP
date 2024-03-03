#include <stdio.h>
int main(){
    int n,i,j,a;
    scanf("%d",&n);
    int arr[n],flag[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]) }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(str[i]==str[j]){
            flag[j]=j-i;
            break;} } }
    int min=flag[0];
    for(i=0;i<n;i++){
        if(flag[i]<min){
        min=flag[i];
        a=i;} }
    printf("%d %d",2*i,2*i-1);
    return 0; }