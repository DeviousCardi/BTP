#include <stdio.h>
#include <stdlib.h>
 int find(int a[21][21],int i,int j) {
                  if (i<j){
                  a[i][j]=0;
                  return a[i][j];
                   else  if {
                       (i==0 &&j==0)
                        a[i][j]=1;
                    return a[i][j]; }
                  else if {
                             (j==0)
                             a[i][j]=1;
                             return a[i][j]; }
                  else {
                           a[i][j]=find(a,i-1,j)+find(a,i-1,j-1);
                           return a[i][j]; } }
int main(){
           int n,k,b,i,j;
           scanf("%d",&b);
           for(i=0;i<=n;i++) {
             for(j=0;j<=k;j++) {
                find(a,i,j); } }
           for(i=0;i<=n;i++) {
            for(j=0;j<=k;j++) {
            if (b==a[i][j])
            printf("%d %d",i,j); } } }