#include <stdio.h>
int grt_than(int a[],int n,int i){
    int j,c=0;
    for(j=0;j<n;j++){
        if((a[j]>a[i]) || (a[j]==a[i])){
            c++; } }
    return c; }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        int c=grt_than(a,n,i);
        if(c==k){
            break; } }
    printf("%d",a[i]);
    return 0; }