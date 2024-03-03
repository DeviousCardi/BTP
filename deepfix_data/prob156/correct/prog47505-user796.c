#include <stdio.h>
int main() {
    int m,n,i,j,s,e;
    int max=0;
    e=0;
    scanf("%d %d",&n,&m);
    int a[100][100];
    int c[100];
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d",&a[i][j]); } }
    for(i=0;i<n;i++){
        s=0;
        for (j=0;j<m;j++){
            s=s+a[i][j];
            c[i]=s;
        }}
    for(i=0;i<n;i++){
        if(c[i]>=max){
            max=c[i]; } }
 printf("%d",max);
    return 0; }