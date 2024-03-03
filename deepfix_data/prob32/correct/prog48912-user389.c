#include <stdio.h>
#include <stdlib.h>
int main() {
    int num_arr[20],i,arr_size;
    scanf("%d",&arr_size);
    for(i=0;i<arr_size;i++)
     scanf("%d",&num_arr[i]);
    for(i=0;i<arr_size;i++) {
        if(i==0) {
            if(num_arr[i]<num_arr[i+1]) {
               printf("Yes");
               break; } }
        else {
            if(i<arr_size-1)
              if(num_arr[i]<num_arr[i-1]&&num_arr[i]<num_arr[i+1]) {
                 printf("Yes");
                 break; }
            if(i==arr_size-1)
               if(num_arr[i]<num_arr[i-1]) {
                  printf("Yes");
                  break; } } }
    if(i==arr_size)
     printf("No");
	return 0; }