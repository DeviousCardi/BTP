#include <stdio.h>
int main(){
    int n , i , j, k , num ;
    scanf("%d",&n);
    int arr[2*n] , diff[n], min = 2*n;
    for(i = 0; i < 2*n ;i++)
        scanf("%d", &arr[i]);
    for( j = 0 ; j < n ; j ++ ) {
        for( k = n ; k < 2*n ; k++) {
            if(arr[j] == arr[k]) {
                diff[j] = k - j;
                if ( diff[j] < min) {
                    min = diff[j];
                    num = j ; } } } }
    printf("%d",num);
    return 0; }