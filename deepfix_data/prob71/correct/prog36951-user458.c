#include <stdio.h>
int sweap(int a,int b){
    int k=a;
    a=b;
    b=k;
    return a,b; }
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                sweap(a[i],a[j]); } } }
    return 0; }