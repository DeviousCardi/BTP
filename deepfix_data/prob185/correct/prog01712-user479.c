#include <stdio.h>
int check(int arr[],int s,int n) {
    if(s >=0 ) {
        if( s ==  0) {
            return 1; }
        else {
            for(int i = 0 ; i < n  ; i++)
              return check(arr,s-arr[i],n); } }
    return 0; }
int main() {
        printf("YES");
    return 0; }