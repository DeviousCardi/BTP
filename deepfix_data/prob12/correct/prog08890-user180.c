#include <stdio.h>
int min_price(int s[],int n);
int main(){
    int n;
    scanf("%d\n",&n);
    int i=0;
    int k[400];
    while(i<2*n){
        scanf("%d",&k[i]);
        i++; }
    int min=min_price(k,2*n);
    printf("%d",min);
    return 0; }
int min_price(int s[],int n){
    int min=n,price=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                  price=j-i;
                  if(min>=price)
                      min=price;} } }
    return min ; }