#include <stdio.h>
int main() {
   int n;
    scanf("%ld",&n);
  long int a[n];
    for(long int i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                 long int k=a[i];
              a[i]=a[j];
              a[j]=k; } } }
    for (int i=0;i<n;i++){
        printf("%d",a[i]); }
        if (n%2!=0){
      long int k=n/2;
        printf("%ld",a[k]);
        exit(0); }
    long int k=n/2;
 long int sum=(a[k]+a[k-1]);
    if(sum%2==0){
    printf("%ld",sum/2);}
    else{ }
    return 0; }