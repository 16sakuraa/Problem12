#include<iostream>

// 12.จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วหาว่าจำนวนคู่ใดบวกกันแล้วได้ค่ามากที่สุด (Level 2)


int main()
{
	int a[3], max=-1000000, i, j;
	scanf_s("%d %d %d", a[0], a[1], a[2]);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (a[i] + a[j] >= max && a[i]!=a[j])
			{
				max = a[i] + a[j];
			}
		}
	}

	printf("%d", max);


	return 0;
}