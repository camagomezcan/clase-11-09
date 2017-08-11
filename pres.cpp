#include <iostream>

int main ()
{double eps =1.0;
double  p=0;
int n = 0;
	for (int i =0; i< 160; i++)
	{
			eps = eps/2.0;
			p = 1.0 + eps;
			n +=1;
			std:: cout.precision(20)<<p<<" | "<<eps<<std::endl;
	}
}
