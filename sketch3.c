#include<stdio.h>
int main()
{
	struct stu_info{ 	
   char num[12]; 
   char name[9]; 
   char sex;
   struct  date1{
       char month[10];
       int day;
       int year;
    }birthday;
   char address[60];
   double income;	
   char phone_number[16];
   char email[40];
}s1,s2;
	struct  date1 ab={"12",10,2020};
	printf("%d %s %d",ab.year,ab.month,ab.day);
}