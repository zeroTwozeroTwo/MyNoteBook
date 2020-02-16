#include<stdio.h>

/*
1.两个匹配的字符串 必须完全匹配 匹配个数 = 字符串长度
2.如果匹配一个字符串，需要记录被匹配字符串地址
3.如果匹配一半未成功 回到记录被匹配字符串地址+1
4.如果匹配的被匹配字符串的结尾 匹配个数 不等于 字符串长度
*/

char* mystrstr(char* dest, char* src);


int main()
{
	char arr[] = "hello world";
	char src[] = "llo";

	char* p = mystrstr(arr, src);

	printf("%s\n",p);
	return 0;
}

char* mystrstr(char* dest, char* src)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int len = strlen(src);
	char* p = NULL;
	while (dest[i] != '\0')
	{
		while (dest[i] == src[j])//匹配个数 = 字符串长度
		{
			if (!count)
			{
				//如果匹配成功一个字符 需要记录位置
				p = &dest[i];
			}
			count++;
			i++;
			j++;
			//匹配成功
			if (count == len)
			{
				return p;
			}
		}
		if (count < len)
		{
			i = i - count;
			j = 0;
			count = 0;
			//continue;
		}
		i++;
	}

	//返回值结果
	return NULL;
}