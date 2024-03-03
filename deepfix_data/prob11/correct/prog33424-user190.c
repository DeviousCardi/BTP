#include <stdio.h>
int sum(int n,int array[],int m,int j){
    int t,i;
    if(m==1){
        return array[j]; }
    else{
        t=array[j];
        int c[n-1];
        for(i=0;i<j;i++){
            c[i]=array[i]; }
        for(i=j;i<n-1;i++){
            c[i]=array[i+1]; }
        return t+sum(n-1,c,m-1,j); } }
int main() {
    int n,s,r;
    scanf("%d %d",&n,&s);
    int i,a[n],j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            r=sum(n,a,i+1,j);
            if(r==s){
                break; } }
        if(r==s){
            break; } }
    if(i==n){
        printf("NO"); }
    else{
        printf("YES"); }
    return 0; }