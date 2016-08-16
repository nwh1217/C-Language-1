#include<stdio.h>
int main()
{
	float quiz1, quiz2, quiz3, quiz4, test, takehometasks, labtest1, labtest2, labtest3, labtest4, total;
	printf("=========STUDENT COURSEWORK========");
	printf("\n");
	
	printf("^^^^^^^^^NG WENG HONG^^^^^^^^^");
	printf("\n");
	
	printf("ID: 1161201057");
	printf("\n");
	
	printf("Enter Quiz1 Mark [out of 2.5]:");
	scanf("%f", &quiz1);
	
	printf("Enter Quiz2 Mark [out of 2.5]:");
	scanf("%f", &quiz2);
	
	printf("Enter Quiz3 Mark [out of 2.5]:");
	scanf("%f", &quiz3);
	
	printf("Enter Quiz4 Mark [out of 2.5]:");
	scanf("%f", &quiz4);
	
	printf("Enter Test mark [out of 10]:");
	scanf("%f", &test);
	
	printf("Enter Take Home Tasks mark [out of 10]:");
	scanf("%f", &takehometasks);
	
	printf("Enter Lab Test 1 Mark [out of 5]:");
	scanf("%f", &labtest1);
	
	printf("Enter Lab Test 2 Mark [out of 5]:");
	scanf("%f", &labtest2);
	
	printf("Enter Lab Test 3 Mark [out of 5]:");
	scanf("%f", &labtest3);
	
	printf("Enter Lab Test 4 Mark [out of 5]:");
	scanf("%f", &labtest4);
	total=quiz1+quiz2+quiz3+quiz4+test+takehometasks+labtest1+labtest2+labtest3+labtest4;
	printf("\n");
	printf("TOTAL [out of 50]: %.2f\n", total);
	printf("\n");
	
	return;
}
