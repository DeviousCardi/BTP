#include <stdio.h>
int main(){
    int a1[100];
    int a2[100];
    int a3[100];
    int n,i,j,k,p;
    scanf("%d",&n);
    for(i=0;i<n;i=i+1) {
        scanf("%d\n",&a1[i]); }
     for(j=0;j<n;j=j+1) {
        scanf("%d",&a2[j]); }
    for(k=0;k<n;k=k+1) {
         p=a2[k];
         a3[k]=a1[p];
        printf("%d",a3[k]); }
    printf("end");
    return 0; }