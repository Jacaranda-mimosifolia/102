#include<stdio.h>
#define max 10
static int a[10]={0,1,2,3,4,5,6,7,8,9};
const int *i_prt=a; 
//pointer arithmetic ָ���㷨
//�������ݼ� 
//����洢��ַһֱ�ڸı䣬�����׵�ַһ��ȷ���ˣ�����Ԫ�صĵ�ַҲ��ȷ����
//��ˣ�����������ʶ�𲢸�����������������ָ���ַ�ĵ�����ݼ�
//���磺int a[max];a=1000,��a[1]=1004,a[2]=1008; 
int main()
{
	for(int i=0;i<max;i++)
	{
		printf("*i_prt=%d\t",*i_prt);
		printf("i_prt=%d\n",i_prt); 
		i_prt++;//�������Զ�ʶ���ַ����ͣ�����ת����һ��Ԫ�� 
	}
	return 0;
}

