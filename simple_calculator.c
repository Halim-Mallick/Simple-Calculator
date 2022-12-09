#include<stdio.h>
int main(){
    int a, b,result;
    char op;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter an operator: ");
    getchar();
    scanf("%c",&op);
    printf("Enter Second number: ");
    scanf("%d",&b);

    if(op=='+'){
        result=a+b;
        printf("result is %d ",result);
    }
    
    else if(op=='-'){
        result=a-b;
        printf("result is %d ",result);
    }
    
    else if(op=='/'){
        result=a/b;
        printf("result is %d ",result);
    }
    
    else if(op=='*'){
        result=a*b;
        printf("Result is %d ",result);
    }
    
    else{
        printf("Wrong input!");
    }
    return 0;
}
