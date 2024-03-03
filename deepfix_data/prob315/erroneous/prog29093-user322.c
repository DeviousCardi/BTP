#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n],b[n];
    int i,j;
    for(i=0;i<n;i++){
        int sum=0;
    scanf ("%d",&a[i]);
      for(j=i+1;j<n;j++){
          x=0;
        if(a[i]>a[j]){
            x=x+1; }
        else{
            x=x+0; }
       sum=sum+x; } }
    printf ("%d\n",sum);
    for(i=0;i<n;i++){
        printf("%d",x); }
	return 0; }