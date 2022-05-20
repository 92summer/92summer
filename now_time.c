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
		printf("星期日");
		break;

	case 1:
		printf("星期一");
		break;

	case 2:
		printf("星期二");
		break;

	case 3:
		printf("星期三");
		break;

	case 4:
		printf("星期四");
		break;

	case 5:
		printf("星期五");
		break;

	case 6:
		printf("星期六");
		break;	
	
	default:
		break;
	}
	printf("\n");
	return 0;
}
