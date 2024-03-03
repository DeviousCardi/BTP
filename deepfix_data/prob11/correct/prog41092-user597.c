#include <stdio.h>
int add(int size,int n,int i,int j,int array[]){
    if(i==size-2 && j==size-1 && array[i]+array[j]!=n) return -1;
    if(j==size-1 && array[i]+array[j]!=n){
        i=i+1;
        j=i; }
    if(array[i]+array[j]==n){
        return 1; }
    return add(size,n,i,j+1,array); }
int main() {
    int size,n,ans,i=0,j=1;
    scanf("%d %d\n",&size,&n);
    int array[size];
    for(int k=0;k<size;k++){
        scanf("%d ",&array[k]); }
    ans= add(size,n,i,j,array);
    if(ans==1) printf("YES");
    else printf("NO");
    return 0; }