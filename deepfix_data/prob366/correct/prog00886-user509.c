#include <stdio.h>
int main(){
    int n,i,j,min=25;
    scanf("%d",&n);
    int a[200];
    for(int i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++)
    {int c=0;
        for(int j=i+1;j<2*n;j++) {
            if(a[i]!=a[j]) {
                c++; }
            if(c<min)
                min=c; } }
    printf("%d",min);
    return 0; }