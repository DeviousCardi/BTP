#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]); }
    int s[100];
    s[0]=1;
    for(int i=1;i<100;i++){
        s[i]=a[i-1]; }
    int t;
    int k;
    for(int g=1;g<100;g++){
        for(int m=0;m<100;m++){
            if(s[g]==s[m] && g!=m){
                t=m;
                k=m-g;
                return 0; } } }
    printf("%d %d",t,k);
   return 0; }