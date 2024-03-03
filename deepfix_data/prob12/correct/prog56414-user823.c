#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[2*n];
    for(i=0;i<=2*n;i++){
         scanf("%d",&arr[i]); }
    int p=0;
    int q=1,s;
    while(q<2*n&&p<<2*n){
            if(arr[p]==arr[q]){
                    s=q-p;
                    return 0; }
            q++;
            if(q==2*n){
                    p++;
                    q=p+1; }
            int min=1000;
            if(s<min){
                    min=s; } }
    printf("%d",s);
    return 0; }