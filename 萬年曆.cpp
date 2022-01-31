#include <stdio.h>

void printCal(int);

int main()
{
	int year;
	while(printf("Please input the year: "), scanf("%d", &year)!=EOF)
	{
		printCal(year);
	}
	return 0;
}

void printCal(int year)
{
	int leap=0, start, count, feb, big, sma; //leap潤年嗎  start第一天禮拜幾  count算現在印到星期幾  feb二月幾天  big大月 sma小月 
	if((year%4==0 && year%100!=0) || year%400==0)
	{
		leap++;
	}
	
	start=(year+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
	big=31, sma=30;
	
	printf("January\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=big;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n\n");
	
	feb= (leap==1) ? 29 : 28;
	printf("February\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=feb;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7;
	printf("\n\n");
	
	printf("March\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=big;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n\n");
	
	printf("April\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=sma;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n\n");
	
	printf("May\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=big;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n\n");
	
	printf("June\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=sma;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n\n");
	
	printf("July\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=big;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n\n");
	
	printf("August\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=big;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n\n");
	
	printf("September\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=sma;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n\n");
	
	printf("October\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=big;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n\n");
	
	printf("November\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=sma;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n\n");
	
	printf("December\n");
	printf("---------------------------\n");
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("---------------------------\n");
	count=0;
	for(int i=1; i<=big;)
	{
		(count<start)?printf("    "):((count%7==6)?printf("%3d\n", i):printf("%3d ", i));
		if(count>=start)
		{
			i++;
		}
		count++;
	}
	start=count%7; //更新下個月的start 
	printf("\n===========================\n\n");
} 
