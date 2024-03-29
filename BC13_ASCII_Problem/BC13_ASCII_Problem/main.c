#define _CRT_SECURE_NO_DEPRECATE
/*
	@author:liang
	牛客网题目链接：https://www.nowcoder.com/ta/beginner-programmers-v1
	time：2024年3月29日 23点06分
	//题目描述：BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。
	//BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。
	//73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33
	//输出描述：一行输出转换题目中给出的所有ASCII码对应的字符，无需以空格隔开。
*/

#include <stdio.h>
int main()				//思路一
{
	int i = 0;
	int arr[] = {73, 32 , 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};//创建数组
	for (i = 0; i < 12; i++) {										   //for循环
		printf("%c", arr[i]);										   //输出	
	}
	return 0;
}
/*
int main()
{
	int arr[] = {73, 32 , 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};//创建数组
	int i = 0;														   
	int sz=sizeof(arr)/sizeof(arr[0]);								   //求数组的长度
	while(i<sz)														   //while循环
	{
		printf("%c",arr[i]);										   //输出	
		i+=1;														   //i+1，也可以下写成i++
	}
	return 0;
}
*/