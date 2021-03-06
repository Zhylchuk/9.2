// 9.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

float Korin(float x,int s1 ,int s)
{
	float k;
	k = pow(1 + (tan  (pow(x,s1)  )  ), 1 / s);
	return k;
}

float Suma(double arr1[10], double arr2[10],int k1,int k2,int n,int s)
{
	float sum = 0;
	for (int m = k1; m <= k2; m++)
	{
		
			
		sum += (n*arr1[m] + pow(arr2[m], s));
	}
	return sum;
}

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double a[10] = { 1, 2.3, -1, -6.4, -2.3, 8.1, 3.3, 0.5, -0.1, 4.4 };
	double b[10] = { 0.5, -2, 3.3, 4.1, 0.9, -3.2, 1, 0, 2.1, -5.1 };
	double x = 2.4, y = -3.3;
	
	
	
	

//	cout << "Сума =  " << Suma(a, b,2,8, 3, 3)<<endl;
	float B;
	float n = (Korin(x, 3, 2) / Suma(a, b, 2, 8, 3, 3));
	cout << "n = " << n<<endl;
	float m = (Korin(y, 7, 2) / Suma(a, b, 1, 5, 5, 5));
	cout << "m = " << m << endl;
	float v = (Suma(a, b, 7, 10, 1, 0) / Korin(1.44, 5, 1));
	cout << "v = " << v << "    "<<Suma(a, b, 4, 5, 1, 0)<<"    "<< Korin(2, 5, 1)<<endl;
	B = (Korin(x,3,2)/Suma(a, b, 2, 8, 3, 3))-(Korin(y,7,2)/Suma(a,b,1,5,5,5))-(Suma(a,b,4,6,1,1)/Korin(1.44,5,1));
	cout << "B = "<< v <<endl;

	system("pause");
    return 0;
}

