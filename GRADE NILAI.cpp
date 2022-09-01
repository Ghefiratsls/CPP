#include <stdio.h>

int main()
{

int nilai;

printf("Input nilai\t: ");
scanf("%i", &nilai);

if(nilai >=80 && nilai <=100)
{
printf("Grade nilai\t: Sangat baik");
}
else if(nilai >=70 && nilai <=79)
{	
printf("Grade nilai\t: Baik");	
}
else if(nilai >=50 && nilai <=69)
{
printf("Grade nilai\t: Cukup");
}
else if(nilai >=10 && nilai <=49)
{
printf("Grade nilai\t: GAGAL");

}

return 0;
}
