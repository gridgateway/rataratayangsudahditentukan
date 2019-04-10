#include "stdio.h"
#include "conio.h"
 
int main () 
{
	int nilai[5];
	int index;
	float total,ratarata;

	printf("Menghitung Nilai Rata-Rata\n");	
	for (index=0;index<5;index++)
	{
    	printf("Nilai Mahasiswa ke-%d=",index+1);
    	scanf("%d", &nilai[index]);
    	total=total+nilai[index];
	 }

	ratarata=total/index;
    printf ("\nJadi Nilai Mahasiswa = %.f\n",total);
    printf ("Rata-rata=%.f\n", ratarata);
    getch ();
}
