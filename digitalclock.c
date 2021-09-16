#include <stdio.h>
#include <time.h> 
#include <unistd.h>
#include <stdlib.h>
int main(){
	int hr,min,sec;
	int d=1000;
	printf("Enter time:");
	scanf("%d%d%d",&hr,&min,&sec);
	if(hr>12||min>60||sec>60)
	printf("Enter valid time");
	
	else{
			while(1)
		{
			sec++;
			if(min>59)
			{
				hr++;
				min=0;
			}
			if(sec>59)
			{
				min++;
				sec=0;
			}
			if(hr>12)
			{
				hr=1;
			}
			printf("%02d:%02d:%02d",hr,min,sec);
			Sleep(d);
			system("cls");
		}
	}
}
