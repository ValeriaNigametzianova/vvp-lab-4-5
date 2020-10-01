#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, A, B;
	float s, d, pr, q;
	printf("Enter a: ");
	scanf_s("%f", &a);
	printf("Enter b: ");
	scanf_s("%f", &b);
	A = fabsf(a);
	B = fabsf(b);
	if ((A != 0) & (B != 0))
	{
		s = A + b;
		if (A > B)
		{
			d = A - B;
			q = A / B;
		}
		else
		{
			d = B - A;
			q = B / A;
		}
		pr = A * B;
		printf("sum/difference/product/quotient of modules of numbers = %f/%f/%f/%f ", s, d, pr, q);
	}
	return 0;
}
