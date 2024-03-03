#include <stdio.h>
int main() {
    int a,i,x,y,j;
    scanf("%d",&a);
    int m[a] ;
    scanf("%d",&m[0]);
    int n=m[0];
    scanf("%d",&m[1]);
    int p=m[1];
    for(i=2;i<=a;i++){
        scanf("%d",&m[i]);
    if (m[i]>n){
        n=m[i];
        x=i; }
    else if (m[i]<p){
        p=m[i];
        y=i; } }
    if (m[0]<p) {
        p=m[0];
        y=0; }
    if (m[1]>n) {
        n=m[1];
        x=1; }
    n=m[x];
    p=m[y];
    m[x]=m[y];
    m[y]=n;
    m[x]=p;
    for(j=0;j<=a;j++){
    printf("%d",m[j]); }
    printf("end");
    return 0; }