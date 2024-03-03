#include <stdio.h>
int main() {
    int t
    scanf("%d",&t);
    int suparr[t];
    int arr[t],pt=0;
    for(int i=0;i<=t;i++){
        arr[i]=0; }
    for(int i=0;i<t;i++){
        scanf("%d",suparr[i]);
        if(suparr[i]>t || suparr[i]<1){
            pt=1; }
        else{
            arr[suparr[i]]+=1; } }
    for(int i=1;i<=t;i++){
        if(arr[i]!=i){
            pt=1;
            break; } }
    if(pt==1){
        printf("No"); }
    else{
        printf("Yes"); }
    return 0; }