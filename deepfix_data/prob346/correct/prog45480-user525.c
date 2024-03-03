#include <stdio.h>
int main(){
    int n,i,j;
    int m;
    scanf("%d",&n);
    int ar1[n];
    int ar2[100];
    for(i=0;i<=n-1;i++) {
        scanf("%d",&ar1[i]); }
    for(j=0;j<=99;j++) {
        ar2[j]=0; }
    for(m=0;m<=99;m++) {
        for(i=0;i<=n-1;i++)
        if(ar1[j]==m) {
        ar2[m]++;
        printf("%d ",ar2[m]); } }
    printf("end");
    return 0; }