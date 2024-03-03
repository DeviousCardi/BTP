#include <stdio.h>
int main(){
    int n,i,j,c;
    int a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            scanf("%d%d",&a[j],&a[j+1]);
            if(a[j]<a[j+1]){
                break; }
            else{
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c; }
            printf("%d",a); } }
    printf("end");
    return 0; }