#include <stdio.h>
int main(){
    int n;
    int i;
    int j;
    int ind;
    int flg=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {for (j=1;j<=n;j++)
    {scanf("%d",&ind);
    if((ind!=1&&i==j)||(ind!=0&&i!=j))
    flg=0; } }
if(flg==0) {
        printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
        else {
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n); }
    return 0; }