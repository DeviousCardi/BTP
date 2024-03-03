#include <stdio.h>
int main(){
    int n,max;
    scanf("%d\n",&n);
    int a[n],b[n];
    for(int i=0;i<2*n;i++){
   scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=n;j<2*n;j++){
            if(a[i]==a[j]){
                b[i]=j-i;
               break; } } }
    max=b[0];
    for(int i=1;i<n;i++){
        if(b[i]<max){
            max=b[i]; } }
    printf("%d",max);
    return 0; }