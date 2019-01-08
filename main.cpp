#include <iostream>
#include <string>

template<typename... T>
decltype(auto) Add(T&&... args)
{
	return (args + ...);
}

template<typename T>
T mul(T a, T b)
{
	return a * b;
}

void Temp()
{
	std::cout<<"in Temp"<<std::endl;
}

void NewTemp()
{
	std::cout << "in NewTemp"<<std::endl;
}
int main()
{
	auto SayHello = std::string("Hello World!");
	std::cout<< SayHello <<std::endl;

	std::cout <<"Add num is :"<<Add(3,5,2,6,4,8)<<std::endl;	
	return 0;
}
