#include <stdio.h>
int n;
scanf ("%d",&n);
int ar1[2*n],ar2[n];
int min(int a,int b){
    if(a>b)return b;
    else return a; }
void func(int a[],int n){
    int i,j,co=0;
    for(i=0;i<2*n&&co<n;i++){
        for(j=0;j<2*n;j++){
            if(a[j]!=-1&&a[i]==a[j]){
                ar2[a[i]]=j-i;
                a[j]=-1;
                co++;
                break; } } }
    co=2000;
    for(i=0;i<n;i++){
        co=min(ar[i],co) }
    printf("%d",co); }
int main(){
    int i=0;
    for(;i<2*n;i++){
        scanf("%d",&ar1[i]) }
    func(ar1,ar2,n);
    return 0; }