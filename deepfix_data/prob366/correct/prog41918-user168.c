#include <stdio.h>
int main(){
    int n,i,j;
    int a[100],difference=0,difference1=0;
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                difference=j-i;
                difference1= (j+1)-(i+1);
                if(difference>difference1)
                difference=difference1; } }
    }printf("%d",difference);
    return 0; }