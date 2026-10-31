//202610305113
//鲁俊志
#include <stdio.h>
int main(){
    float c;
    printf("请输入摄氏温度：");
    scanf("%f",&c);
    float f = c*9.0/5+32;
    printf("华氏温度为：%.1f\n",f);
    return 0;
}