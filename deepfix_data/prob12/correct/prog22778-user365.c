#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int size=2*n;
    int a[size];
    int i=0,j=0,k=0;
    int b[n];
    int min=INT_MAX;
    while(k<=size){
        scanf("%d",&a[k]);
        k++; }
    k=0;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++) {
            if(a[i]==a[j])
              b[k]=j-i;
              k++; } }
    i=0;
    while(i<n){
        if(b[i]<min){ min=b[i];}
        i++; }
    printf("%d",min);
    return 0; }