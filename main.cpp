#include <iostream>
#include <string>

void RepeatPrint(std::string, uint32_t);

class ShapeGenerator
{
public:
	ShapeGenerator(int totalLines):TotalLines{totalLines}{}
	~ShapeGenerator() = default;

	void print()
	{
		for(int i=0; i!= TotalLines; ++i)
		{
			RepeatPrint(" ",ComputeCurrentSpace(i+1));
			RepeatPrint("*",ComputeCurrentStars(i+1));
			std::cout<<std::endl;
		}
	}

private:
	int ComputeMaxStars()
	{
		return 2*TotalLines + 1;
	}
	int ComputeCurrentSpace(int LineNumber)
	{
		return (ComputeMaxStars() - ComputeCurrentStars(LineNumber))>>1;
	}

	int ComputeCurrentStars(int LineNumbers)
	{
		return 2*LineNumbers - 1;
	}

private:
	int TotalLines;
};

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

	int Lines;

	while(std::cin>>Lines)
	{
		ShapeGenerator sg{Lines};

		sg.print();
	}
	return 0;
}
