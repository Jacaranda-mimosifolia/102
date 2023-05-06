#include<stdio.h>
#define max 10
static int a[10]={0,1,2,3,4,5,6,7,8,9};
const int *i_prt=a; 
//pointer arithmetic 指针算法
//递增，递减 
//数组存储地址一直在改变，当是首地址一旦确定了，后续元素的地址也就确定了
//因此，编译器可以识别并根据数组类型来进行指针地址的递增与递减
//例如：int a[max];a=1000,则：a[1]=1004,a[2]=1008; 
int main()
{
	for(int i=0;i<max;i++)
	{
		printf("*i_prt=%d\t",*i_prt);
		printf("i_prt=%d\n",i_prt); 
		i_prt++;//编译器自动识别字符类型，并跳转到下一个元素 
	}
	return 0;
}

