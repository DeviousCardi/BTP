#include <stdio.h>
int sum(int n,int a[], int j, int s){
    int r,i;
    if(a[j]==s){
        return 1; }
    else{
        int t=a[j];
        for(i=0;i<n && i!=j;i++){
            r=sum(n,a,i,s-t);
            if(r==1){
                break; } }
        if(r==1){
            return 1; }
        else{
            return 0; } } }
int main(){
    int n,s;
    scanf("%d %d",&n,&s);
    int a[n],i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int r;
    for(j=0;j<n;j++){
        r=sum(n,a,j,s);
        if(r==1){
            break; } }
    if(r==1){
        printf("YES"); }
    else{
        printf("NO"); } }