#include <stdio.h>
int main() {
   int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m],b[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        scanf("%d",&a[i][j]); } }
for(int i=0;i<n;i++){
    int k=0;
    for(int j=0;j<m;j++){
        int k+=a[i][j]; }
    b[i]=k; }
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(b[i]<b[j]){
            int k=b[i];
            b[i]=b[j];
            b[j]=k; } } }
printf("%d",b[0]);
    return 0; }