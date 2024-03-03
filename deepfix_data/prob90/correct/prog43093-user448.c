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
        for(m=i;m<n;m++){
            if (j==a[m]){
                printf("lucky");
                flag=1;
                break; } }
        if (flag==1){break;} }
    return 0; }