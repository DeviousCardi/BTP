#include <stdio.h>
int main(){
    int n,temp,cs=1;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<n+1;i++){
        a[i]=0; }
    for(int i=1;i<n;i++){
        scanf("%d,",&temp);
        a[temp]++; }
    if(i==n){
        scanf("%d",&temp);
        a[temp]++; }
    for(int i=1;i<=n;i++){
        if(a[i] !=i && a[i]!=0) {
            cs=-1;
            break; } }
    if(cs==-1){
        printf("No"); }
    if(cs==1){
        printf("Yes"); }
    return 0; }