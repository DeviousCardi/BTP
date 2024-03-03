#include <stdio.h>
int main(){
    int n,b[n],max;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n/2;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n/2-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]=a[j]){
                b[i]=j-i;
                break; } } }
    max=b[0];
    for(int i=1;i<n/2;i++){
        if(b[i]<max){
            max=b[i]; } }
    printf("%d",max);
    return 0; }