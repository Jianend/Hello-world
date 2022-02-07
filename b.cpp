#include <stdio.h>
char d;
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}
int sud(int a,int b)
{
    int c;
    c=a-c;
    return c;
}
int mul(int a,int b){
    int c;
    c=a+b;
    return c;
}int div(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a,b;
    
    printf("add-----------1\n");
    printf("sud-----------2\n");
    printf("mul-----------3\n");
    printf("div-----------4\n");
    scanf("%d%c%d",a,b,d);
    switch (d)
    {
    case 43/* constant-expression */:
        /* 1code */
        add(a,b);
        break;
    case 45:
    sud(a,b);
    break;
    case 42:
    mul(a,b);
    break; 
    default:
    div(a,b);
    break;
    }
return 0;
}
