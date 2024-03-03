#include <stdio.h>
#include<math.h>
int check(int n[],int s){
    for(int i=0;n[i];i++){
        if(s==a[i]){
            return 1; } }
    return 0; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    for(int i=1;i<n;i++){
        scanf(",%d",&a[i]); }
    int n[n]={0},f[n]={0},count=0;
    for(int i=0,i<n;i++){
        if(check(n[],a[i])){
            f[count]++; }
        else{
            count++;
            n[count]=a[i];
            f[count]++; } }
    for(int i=1;i<=d;i++){
        if(a[i-1]!=i){
            printf("No");
            return 0; } }
    printf("Yes");
    return 0; }