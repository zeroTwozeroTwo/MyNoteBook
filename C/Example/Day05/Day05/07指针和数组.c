#include<stdio.h>


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };


	//数组名是数组的首地址，这是一个常量
	/*printf("%p\n",arr);
	printf("%p\n",&arr[0]);*/
	//p = arr; [数据类型 *] 变量名
	//1.指向数组的指针 当操作指针的时候，间接的操作了数组
	int* p = arr;

	//指针降级操作
	/**p = 100;
	*(p + 1) = 200;
	p[5] = 300;*/


	p++;
	*p = 200;

	for (int i = 0; i < 10; i++)
	{
		//*(p+1)  内存地址变了1*sizeof(int)
		printf("%d\n",arr[i]);
		//printf("%d\n",p[i]);
		//printf("%d\n", *(p + i));
	}

	//

	return 0;
}