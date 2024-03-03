#include <stdio.h>
int main(){
    int n,i,j,a[500],min=200,temp;
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<2*n-1;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                temp=j-i;
                if(temp<min)
                min=temp; } } }
    if(n!=0)
    printf("%d",min);
    return 0; }