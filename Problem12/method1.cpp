﻿#include<iostream>

// 12.จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วหาว่าจำนวนคู่ใดบวกกันแล้วได้ค่ามากที่สุด (Level 2)


int main()
{
	int a[3],max=-100000,j,res=-100000,i;
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", &a[i]);

	}
	

	for(i=0;i<3;i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			j = i;
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		
		if (max + a[i] >= res && i!=j)
		{
			res = max + a[i];
		}
	
	}

	printf("%d", res);

	return 0;
}