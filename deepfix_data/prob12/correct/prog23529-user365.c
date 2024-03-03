#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int size=2*n;
    int a[size];
    int i=0,j=0,k=0;
    int b[n];
    int min=1000;
    while(k<=size){
        scanf("%d",&a[k]);
        k++; }
    for(i=0;i<size;i++){
        for(j=i;j<size;j++) {
            if(a[i]==a[j])
              b[i]=j-i; } }
    i=0;
    while(i<n){
        if(b[i]<min){ min=b[i];}
        i++; }
    printf("%d",min);
    return 0; }