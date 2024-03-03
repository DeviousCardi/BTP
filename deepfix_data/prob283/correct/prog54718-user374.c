#include <stdio.h>
#include <stdlib.h>
int findingvalues(int x[4][6],int m,int n);
int main() {
    int count=0;
    int i,j,k,a[4][6];
    scanf("%d",&k);
    for(i=0;i<4;i++) {
        for(j=0;j<6;j++) {
           a[i][j]=findingvalues(a,i,j); } }
    for(i=0;i<4;i++) {
        for(j=0;j<6;j++) {
            if(k==a[i][j] && count==0) {
                count=count+1;
                printf("%d %d",i,j); } } }
    if(count==0)
    printf("-1");
    return 0; }
int findingvalues(int x[4][6],int m,int n) {
    if(m==0) {
        return n+1; }
    else if(m>0 && n==0) {
        return findingvalues(x,m-1,1); }
    else
    return (findingvalues(x,m-1,(findingvalues(x,m,n-1)))); }