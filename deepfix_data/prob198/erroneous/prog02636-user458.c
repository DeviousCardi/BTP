#include <stdio.h>
#include <stdlib.h>
int main() {
int n1,n2, i,j,b,a[n1],c[n2];
    scanf("%d\n",&n1);
    for(i=0;i<n1;i++){
        scanf("%d\n",&a[i]); }
     scanf("%d\n",&n2);
    for(i=0;i<n2;i++){
        scanf("%d\n",c[i]); }
    for(i=0;i<n1;i++){
        for(j=i+1;j<n1;j++){
            if(a[i]<a[j]){
                b=a[i];
                a[i]=a[j];
                b=a[j]; } } } }
  for(i=0;i<n1;i++){
      for(j=0;j<n2;j++){
          if(a[i]=c[j]){
              printf("NO");
              exit(0); } }
      printf("%d",a[0]);}
	return 0; }