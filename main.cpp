#include <iostream>
#include <string>

void RepeatPrint(std::string str, uint32_t times)
{
	for(int i=0; i!= times; ++i)
	{
		std::cout<<str;
	}
}


int main()
{
	std::cout<<"print Start Program"<<std::endl;
	return 0;
}
