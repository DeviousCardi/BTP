#include <stdio.h>
int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        int min=200;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                if(i>j)
                x=i-j;
                if(i<j);
                x=j-i;
            }if(x<min)
            min=x; }
    }printf("%d",min);
    return 0; }