#include <stdio.h>
int main(){
    int peak=0,i,a[100],n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            peak=peak+1; }
        else
            continue; }
    printf("%d",peak);
    return 0; }