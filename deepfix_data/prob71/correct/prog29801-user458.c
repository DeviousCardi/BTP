#include <stdio.h>
int main() {
   int n;
    scanf("%d",&n);
  long int a[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                 int k=a[i];
              a[i]=a[j];
              a[j]=k; } } }
    if (n%2!=0){
      long int k=n/2;
        printf("%ld",a[k]);
        exit(0); }
    long int k=n/2;
 long int sum=(a[k]+a[k-1]);
    if(sum%2==0){
    printf("%ld",sum/2);}
    else{
        printf("%0.1f",sum/2.0); }
    return 0; }