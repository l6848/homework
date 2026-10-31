//202610305113
//鲁俊志
#include <stdio.h>
int main(){
    printf("请输入两个数和一个运算符 (例如: 3.5 + 4.2)");
    float a,b;
    char op;
    scanf("%f %c %f",&a,&op,&b);
    if(op=='+'){
        printf("%.2f\n",a+b);
    }else if(op=='-'){
        printf("%.2f\n",a-b);
    }else if(op=='*'){
        printf("%.2f\n",a*b);
    }else if(op=='/'){
          if(b==0){
            printf("错误: 除数不能为零\n");
        }else{
            printf("%.2f\n",a/b);
            
        }
    }else{
        printf("错误: 无效的运算符\n");
    }
        return 0;
}