/*������ص�ǰʱ��*/
#include<stdio.h>
#include <time.h>

int main()
{
	time_t now;
	now = time(&now);

	struct tm TIME_NOW;
	TIME_NOW = *localtime(&now);

	printf("%d/%d/%d\t", TIME_NOW.tm_year + 1900, TIME_NOW.tm_mon + 1, TIME_NOW.tm_mday);
	printf("%d%d:%d%d:%d%d\t",TIME_NOW.tm_hour/10, TIME_NOW.tm_hour%10, TIME_NOW.tm_min/10, TIME_NOW.tm_min%10, TIME_NOW.tm_sec/10, TIME_NOW.tm_sec%10);
	switch (TIME_NOW.tm_wday)
	{
	case 0:
		printf("������");
		break;

	case 1:
		printf("����һ");
		break;

	case 2:
		printf("���ڶ�");
		break;

	case 3:
		printf("������");
		break;

	case 4:
		printf("������");
		break;

	case 5:
		printf("������");
		break;

	case 6:
		printf("������");
		break;	
	
	default:
		break;
	}
	printf("\n");
	return 0;
}
