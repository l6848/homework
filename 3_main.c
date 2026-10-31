//202610305113
//鲁俊志
#include <stdio.h>
int main(){
    printf("三条边长为：");
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("能构成三角形\n");
    }else{
        printf("不能构成三角形\n");
    }
    return 0;
} 