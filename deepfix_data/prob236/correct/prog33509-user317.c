#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]); }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(b[i]>b[j]){
                int f,m;
                f=b[i];
                b[i]=b[j];
                b[j]=f;
                m=a[i];
                a[i]=a[j];
                a[j]=f; } } }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("end");
    return 0; }