#include <stdio.h>
int calculator(int a,char s ,int b){
    int c;
    if (s=='+')
    c=a+b;
else if (s=='-')
c=a-b;
else if (s=='*')
c=a*b;
else if (s=='/')
c=a/b;

    return c;
}
int main()
{int c;
    printf("add-----------1\n");
    printf("sud-----------2\n");
    printf("mul-----------3\n");
    printf("div-----------4\n");
    char s;
    int a,b;
scanf("%d%c%d",&a,&s,&b);
    c=calculator(a,s,b);
printf("%d",c);
    return 0;
} 