#include <stdio.h>
#include<math.h>
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
else if (s=='^')
 c=pow(a,b);
    return c;
}
int main()
{int c;
    printf("|+      1|\n");
    printf("|-      2|\n");
    printf("|*      3|\n");
    printf("|/      4|\n");
    printf("|^      5|\n");
    char s;
    int a,b;
scanf("%d%c%d",&a,&s,&b);
    c=calculator(a,s,b);
printf("%d",c);
    return 0;
} 