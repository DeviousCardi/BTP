#include <stdio.h>
int main(){
    int k , n , i , j , l , temp = 0;
    scanf("%d",&k);
    scanf("%d",&n);
    int arr[n];
    for( l = 0 ;l < n ;l++)
        scanf("%d",&arr[l]);
    for(i = 0 ; i < n - 1 ; i++) {
        for( j = i + 1 ; j < n ; j++) {
            if( arr[i] + arr[j] == k)
                temp ++ ;
            printf("%d \n",temp);
            printf("%d\n",arr[i] + arr[j]); } }
    if(temp == 0)
        printf("unlucky");
    else
        printf("lucky");
    return 0; }