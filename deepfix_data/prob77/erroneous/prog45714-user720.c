#include <stdio.h>
int main() {
    int i,n,a,max,min,MAXj,MINl;
    scanf("%d"&n);
    int s[n];
    max=-1;
    for(i=1;i<=n;i=i+1){
        scanf("%d",&a);
        s[i]=a;}
    for(j=1;j<=n;j=j+1){
        if(s[j]>max){
            max=s[j];
            MAXj=j; } }
    for(l=1;l<=n;l=l+1){
        min=max;
        if(s[l]<min){
            min=s[l];
            MINl=l; } }
    term=s[MAXj] ;
    s[MAXj]=s[MINl];
    s[MINl]=term;
        printf("%s",s[i]) }
    printf("end");
    return 0; }