#include<stdio.h>
int main() {
    int n, arr[100];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    int max=0;int count=0;
    for(int i=0;i<n;i++){
        int less=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]>less){
                count++;
                less=arr[j];
               printf("%d...%d...%d....%d.....%d\n",i,j,arr[j],less,count); } }
        if(count>max){
            max=count; } }
    return 0; }