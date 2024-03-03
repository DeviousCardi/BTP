#include <stdio.h>
#include <stdlib.h>
int main() {
    long int num_arr[10000];
    int size,i,j=0,count[10000],max,a;
    scanf("%d",&size);
    for(i=0;i<size;i++)
     scanf("%ld",&num_arr[i]);
     for(i=0;i<size;i++)
      count[i]=0;
    for(i=0;i<size;i++) {
          if(num_arr[i]==num_arr[i+1]) {
            count[j]=count[j]+1;
            continue; }
        j=j+count[j]; }
    max=count[0];
        for(j=0;j<size;j++) {
           if(max<count[j]||max==count[j]) {
            max=count[j];
            a=j; } }
     printf("%ld",num_arr[a]);
	return 0; }