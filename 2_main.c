//202610305113
//鲁俊志
#include <stdio.h>
int main(){
    printf("输入的实数为：");
    float a;
    scanf("%f",&a);
    if(a>0){
        printf("该数为正数\n");
    }else if(a<0){
        printf("该数为负数\n");
    }else{
        printf("该数为零\n");
    }
    return 0;
} 