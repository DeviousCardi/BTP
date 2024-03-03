#include <stdio.h>
int main(){
    int x,n,i,j;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&a[0]);
    for(i=1;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        x=a[i];
        for(j=i+1;j<n;j++){
            if(x>a[j] {
                x=a[j]; } }
        printf("%d ",x); }
    printf("end");
    return 0; }