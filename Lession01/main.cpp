#include <iostream>
#include <string>

template<typename... T>
decltype(auto) Add(T&&... args)
{
	return (args + ...);
}

int main()
{
	auto SayHello = std::string("Hello World!");
	std::cout<< SayHello <<std::endl;

	std::cout <<"Add num is :"<<Add(3,5,2,6,4,8)<<std::endl;	
	return 0;
}
