#include <stdio.h>
int main(){
   int a[1000];
    int i,j,n,k,m=0,flag=0;
    scanf("%d",&k);
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for (i=0;i<n;i++){
        j=k-a[i];
        while (m<n){
            if (j==a[m]){
                printf("lucky");
                flag=1;
                break; }
            else {flag==2;}
            m++; }
        if (flag==1){break;} }
    if (flag==2){
        printf("unlucky"); }
    return 0; }