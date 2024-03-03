#include <stdio.h>
int main(){
    int a,i,j,c=0;
    scanf("%d",&a);
    int d[a];
    for(i=0;i<a;i++) {
        scanf("%d",&d[i]); }
    for(j=1;j<a-1;j++) {
        if((d[j]>d[j-1])&&(d[j]>d[j+1])) {
            c++; }
        printf("%d",c);break; }
    return 0; }