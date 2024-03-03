#include <stdio.h>
int main() {
    int n;
long int m;
    scanf("%d%ld\n",&n,&m);
  long  int a[n];
    for(int i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==m){
                printf("YES");
            exit(0); } } }
    printf("NO");
    return 0; }