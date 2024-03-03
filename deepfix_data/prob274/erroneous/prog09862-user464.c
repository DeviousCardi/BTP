#include <stdio.h>
int main(){
    int n,t,i,x,a[100],j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]==a[j]) c++; }
        b[i]=c;
    }for(i=0;i<n;i++)
    printf("%d",b[i]);
    return 0; }