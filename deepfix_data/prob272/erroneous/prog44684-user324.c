#include <stdio.h>
int main(){
    int a1,a2,n;
    int T[n];
    scanf("%d %d %d",a1,a2,n);
    T[0]=a1;
    T[1]=a2;
    for(i>1;i<n;i=i+1){
        T[i]=T[i-1]+T[i-1]; }
    return 0; }