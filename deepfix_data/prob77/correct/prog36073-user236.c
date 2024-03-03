#include <stdio.h>
int main() {
    int a,i,j,temp;
    int x=0;
    int y=1;
    scanf("%d",&a);
    int m[a] ;
    scanf("%d ",&m[0]);
    int n=m[0];
    int p=m[0];
    for(i=1;i<=a;i++) {
        scanf("%d ",&m[i]);
        if (m[i]>n){
            n=m[i];
            x=i; }
        else if (m[i]<p){
            p=m[i];
            y=i; } }
    temp=x;
    x=y;
    y=temp;
    for(j=0;j<a;j++){
    printf("%d ",m[j]); }
    printf("end");
    return 0; }