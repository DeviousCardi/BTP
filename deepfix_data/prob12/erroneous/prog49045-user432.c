#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[2*n],temp,l=2*n;
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<2n;i++) {
        for(j=i+1;j<2n;j++) {
            if(a[i]==a[j])
                temp=j-i; }
        if(temp<l)
            l=temp; }
    printf("%d",l);
    return 0; }