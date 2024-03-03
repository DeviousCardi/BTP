#include <stdio.h>
int main(){
            int x_1,y_1,x_2,y_2;
            float slope;
            scanf("%d%d/n",&x_1,&y_1);
            scanf("%d%d",&x_2,&y_2);
            if(x_1==x_2)
              {printf("inf");}
            else
                {slope=(y_2-y_1)/(x_2-x_1);
                    printf("%.2f",slope);}
        return 0; }