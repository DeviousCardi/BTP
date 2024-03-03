#include <stdio.h>
int min(int a,int b){
    if(a>b)return b;
    else return a; }
void func(int a[],int ar2[],int n){
    int i,j,co=0;
    for(i=0;i<2*n;i++){
        for(j=i+1;j<2*n;j++){
            if(a[j]!=-1&&a[i]==a[j]){
                ar2[a[i]]=j-i;
                printf("%d %d\n",a[j],ar2[a[i]]);
                a[j]=-1;
                co++;
                break; } } }
    co=ar2[1];
    for(i=2;i<n;i++){
        co=min(ar2[i],co); }
    printf("%d",co); }
int main(){
    int ar1[200],ar2[100];
    int n;
    scanf ("%d",&n);
    int i=0;
    for(;i<2*n;i++){
        scanf("%d",&ar1[i]); }
    func(ar1,ar2,n);
    return 0; }