#include <stdio.h>
int main(){
    int a,i,j,k,d;
    int min=2*a;
    scanf("%d\n",&a);
    int arr[2*a];
    for(i=0;i<2*a;i++) {
        scanf("%d",&arr[i]); }
    for(j=0;j<2*a;j++) {
        for(k=j+1;k<2*a;k++) {
            if(arr[j]==arr[k])
                d=k-j;
                if(min>d)
                    min=d; } }
    printf("%d",min);
    return 0; }