#include <stdio.h>
int main(){
    int n,i,j;
    int a[200],difference=0,difference1=0;
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                difference=j-i;
                difference1=difference;
                if(difference>difference1)
                 difference1=difference; } }
    }printf("%d",difference);
    return 0; }