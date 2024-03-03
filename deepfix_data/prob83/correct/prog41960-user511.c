#include <stdio.h>
void rot(int d,int mat[],int n) {
    int j,i;
    for(i=1;i<=d;i++) {
       for(j=n-1;j>=0;j--) {
          mat[j]=mat[j]+mat[j-1];
          mat[j-1]=mat[j]-mat[j-1];
          mat[j]=mat[j]-mat[j-1]; } }
    for(i=0;i<n;i++) {
        printf("%d ",mat[i]); } }
int main() {
    int n,d,i;
    scanf("%d",&n);
    int mat[n];
    for(i=0;i<n;i++) {
        scanf("%d",&mat[i]); }
    scanf("%d",&d);
    rot(d,mat,n);
    return 0; }