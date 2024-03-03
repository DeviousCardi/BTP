#include <stdio.h>
int main(){
    int n,i,j,c;
    int a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        for(j=0;j<n;j++){
            scanf("%d",&a[j+1]);
            if(a[i]<a[j+1]){
                continue; }
            else{
                c=a[i];
                a[i]=a[j+1];
                a[j+1]=c; } }
        printf("%d ",a[i]); }
    printf("end");
    return 0; }