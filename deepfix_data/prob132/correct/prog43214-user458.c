#include <stdio.h>
#include<string.h>
int main() {
    int n,i,l,k=0;
    scanf("%d\n",&n);
    char a[2*n],b[n],sum=0;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++) {
        if((i%2)==0) {
            b[k]=a[i];
            k++;
            sum=sum+b[k]; } }
    int total=0;
    for(int i=0;i<n;i++){
        total=total+a[i]; }
    for(int k=0;k<=n;k++){
        if(k*(k+1)==2*n){
            if(total*6==k*(k+1)*(2*k+1)){
            printf("Yes");
            exit(0);} } }
   printf("No");
return 0; }