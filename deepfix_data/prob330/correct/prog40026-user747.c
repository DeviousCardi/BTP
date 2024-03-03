#include <stdio.h>
int main(){
    int peak=0,i,a[100],n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=1;i<n;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            peak=peak+1;
            printf("%d\n",peak); }
        else
            printf("%d\n",peak);
            continue; }
    printf("%d",peak);
    return 0; }