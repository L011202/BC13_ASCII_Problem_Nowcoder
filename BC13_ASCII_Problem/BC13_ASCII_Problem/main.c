#define _CRT_SECURE_NO_DEPRECATE
/*
	@author:liang
	ţ������Ŀ���ӣ�https://www.nowcoder.com/ta/beginner-programmers-v1
	time��2024��3��29�� 23��06��
	//��Ŀ������BoBo��KiKi�ַ��������ַ�������ʾ���ַ����ڴ�����ASCII����ʽ�洢��
	//BoBo����һ�������KiKi��ת������ASCII��Ϊ��Ӧ�ַ���������ǡ�
	//73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33
	//���������һ�����ת����Ŀ�и���������ASCII���Ӧ���ַ��������Կո������
*/

#include <stdio.h>
int main()				//˼·һ
{
	int i = 0;
	int arr[] = {73, 32 , 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
	for (i = 0; i < 12; i++) {
		printf("%c", arr[i]);
	}
	return 0;
}
/*
int main()
{
	int arr[] = {73, 32 , 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
	int i = 0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	while(i<sz)
	{
		printf("%c",arr[i]);
		i+=1;
	}
	return 0;
}
*/