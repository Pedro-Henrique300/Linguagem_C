#include<stdio.h>
#include<conio.h>

int main()
{
	int A,B,auxiliar;
	A=5;
	B=10;
	
	auxiliar=A;
	A=B;
	B=auxiliar;
	
	printf("\nA=%d",A);
	printf("\nB=%d",B);
	getch();
}
