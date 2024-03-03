#include <stdio.h>
int main(){
    int i, n;
    scanf("%d",n);
    int a[105],b[1005];
    for (i=0;i<n;i++){
        scanf("%d",a[i]); }
    for (i=0,j=0;i<n,j<n;i++,j++){
        i=a[i];b[j]=a[i];
        i--;
        for(m=0;m<=j;m++){
            if (b[j]==b[m]){
                printf("%d",m-j+1);
                break; } } }
    return 0; }