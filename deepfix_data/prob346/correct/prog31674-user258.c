#include <stdio.h>
int main(){
    int n,i,j,c;
    int a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d%",&a[j],&a[j+1]);
            if(a[j]<a[j+1]){
                continue; }
            else{
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c; } }
        printf("%d",a[j]); }
    printf("end");
    return 0; }