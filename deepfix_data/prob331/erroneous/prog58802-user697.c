#include <stdio.h>
int main(){
 int n,i,j,k,p=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++) {
     int ar(i)[n]; }
 for(i=1;i<=n;i++) {
     for(j=1;j<=n;j++)
     scanf("%d",ari[j]);
     scanf("\n"); }
    for(k=1;k<=n;k++) {
    if(ark[k]==1)
    continue;
    else {
        printf("GIVEN 3*3 matrix is NOT an IDENTITY MATRIX");
        break; } }
    for(j=1;j<=n;j++) {
        for(k=1;k<=n;k++) {
            if(j==k)
            continue;
            if(ark[j]==0)
            continue;
            else
            printf("GIVEN 3*3 matrix is NOT an IDENTITY MATRIX"); }
        p+=1; }
    if(p==n)
    printf("GIVEN 3*3 matrix is an IDENTITY MATRIX");
    return 0; }