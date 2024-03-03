#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int a=0,j;
    for(j=0;j<100;j++) {
        if(arr[j]<upperLimit&&arr[j]>a) {
            a=arr[j];
        };
    };
    return a; }
int main() {
    int k,i,l,y,x=0;
    scanf("%d %d",&n,&k);
    int z[k];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    };
    for(l=n;l<100;l++) {
        arr[l]=0;
    };
    for(i=0;i<100;i++) {
        if(arr[i]>x) {
            x=arr[i];
        };
    };
    y=z[0]=x;
    for(i=0;i<k;i++) {
        printf("%d\n",y);
        y=getMaxLessThan(y);
    };
    return 0; }