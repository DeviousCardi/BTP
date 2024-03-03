#include <stdio.h>
int main(){
    int n,i,j,x;
    scanf("%d",&n);
    int a[300];
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    int min=3000;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]) {
                x=j-i;
                break; } }
        printf("%d\n",x);
        if(x<min)
            min=x; }
    printf("%d",min);
    return 0; }