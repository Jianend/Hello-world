#include<stdio.h>
//pai = 4*(1-1/3+1/5-1/7 ....)
double While()
{
	double sum=0;
	int flag=1;//奇数项位正，偶数项为负
	double temp=1;
	int i=1;
	while(i<=100)
	{
		temp=1.0/(2*i-1)*(flag);
		i++;
		sum=sum+temp;
		flag=-flag;
	}
	return sum; 
}
int main()
{
	double pai=0.0;
	pai=4*While();
	printf("%.8lf\n",pai);
	return 0;
}