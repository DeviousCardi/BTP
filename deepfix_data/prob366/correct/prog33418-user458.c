#include <stdio.h>
int main(){
    int n,max,count=0;
    scanf("%d\n",&n);
    int a[n],b[n];
    for(int i=0;i<2*n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=n;j<2*n;j++){
            if(a[i]==a[j]){
                count=j-i;            } }
        b[i]=count;
        count=0; }
    for(int i=1;i<n;i++){
     printf("%d",b[i]); }
   printf("%d",max);
    return 0; }