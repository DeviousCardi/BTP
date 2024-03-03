#include <stdio.h>
int main() {
int n,count=0;
scanf("%d\n",&n);
int k=2*n-1;
int str[k];
scanf("%s",str);
printf("%s",str);
int a[n];
for(int i=0;i<k;i++){
    if(48<=str[i]<=57){
        a[count]=str[i];
        count++; } }
return 0; }