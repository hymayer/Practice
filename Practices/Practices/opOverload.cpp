#include <iostream>


class complex
{
public:
	complex()
	{
		real = 0;
		imag = 0;
	}

	complex(double r, double i)
	{
		real = r;
		imag = i;
	}

	complex operator+(const complex& c);
	complex operator-(const complex& c);
	complex operator*(const complex& c);
	//complex operator/(const complex& c);
	friend void print(const complex& c);

private:
	double real;
	double imag;
};

inline complex complex::operator+(const complex& c)
{
	return complex(real + c.real, imag + c.imag);
}

inline complex complex::operator-(const complex& c)
{
	return complex(real - c.real, imag - c.imag);
}

inline complex complex::operator*(const complex& c)
{
	return complex(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
}

//inline complex complex::operator/(const complex& c)
//{
//	return complex()
//}

void print(const complex& c)
{
	if (c.imag < 0)
		std::cout << c.real << c.imag << 'i';
	else
		std::cout << c.real << '+' << c.imag << 'i';
}


void Test()
{
	complex c1(2.0, 3.0), c2(4.0, -2.0), c3;

	c3 = c1 + c2;

	std::cout << "\nc1+c2=";

	print(c3);

	c3 = c1 - c2;

	std::cout << "\nc1-c2=";

	print(c3);

	c3 = c1 * c2;

	std::cout << "\nc1*c2=";

	print(c3);

	/*c3 = c1/c2;

	cout<<"/nc1/c2=";

	print(c3);*/

	/*c3 = (c1 + c2) * (c1 - c2) * c2 / c1;

	cout<<"/n(c1+c2)*(c1-c2)*c2/c1=";

	print(c3);*/

	std::cout << std::endl;

	system("pause");
}