#include <stdio.h>
#include<math.h>
int check(int n[],int s){
    for(int i=0;n[i];i++){
        if(s==n[i]){
            return i; } }
    return -1; }
int main() {
    int n;
    scanf("%d",&n);
    int a[100];
    scanf("%d",&a[0]);
    for(int i=1;i<n;i++){
        scanf(",%d",&a[i]); }
    int no[100]={0},f[100]={0};
    for(int j=0;j<n;j++){
        if(check(no,a[j])>=0){
            f[check(no,a[j])]++; }
        else{
            int p;
            for(p=0;no[p];p++){ }
            no[p]=a[j];
            f[p]=1; } }
    for(int i=0;no[i];i++){
        if(no[i]!=i+1){
            printf("No");
            return 0; } }
    printf("Yes");
    return 0; }