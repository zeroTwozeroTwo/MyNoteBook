#include<stdio.h>

int my_strcmp(char s1[], char s2[]);

int main()
{


	return 0;
}


int my_strcmp(char s1[], char s2[])
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		i++;
	}
	//注意:判断另外一个是否为结束
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		return s1[i] - s2[i];
	}

	return 0;
}