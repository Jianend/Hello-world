#include <stdio.h>
int add(int a,char s ,int b){
    int c;
    if (s==43)
    c=a+b;
else if (s==45)
c=a-b;
else if (s==42)
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
    c=add(a,s,b);
printf("%d",c);
    return 0;
} 