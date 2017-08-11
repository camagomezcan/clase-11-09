#include <iostream>

int main(void)

{
  int n=0,m = 0;
  long double under = 1;
  long double over = 1;
 for (int i =0; i < 17000; i++)
 
 {
	 over = over*2;
	 m = m+1;
	 
	 
 
		
		 
		 under = under/2;
		 n = n+1; 

  std::cout<<n<<"  |  "<< under <<" |  "<<over<< std::endl;

}

}
