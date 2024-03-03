#include <stdio.h>
int main(){
            float x_1,y_1,x_2,y_2;
            float slope;
            scanf("%f%f/n",&x_1,&y_1);
            scanf("%f%f",&x_2,&y_2);
            if(x_1==x_2)
              {printf("inf");}
            else
                {slope=(y_2-y_1)/(x_2-x_1);
                    printf("%.2f",slope);}
        return 0; }