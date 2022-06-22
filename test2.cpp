#include <iostream>

class Batata {
	private:
		int i;
	public:
		std::string name;
		void printbatata(void)
		{
			std::cout << i << std::endl;
		}
		void printstr(std::string str)
		{
			std::cout << str;
		}
		void printname();
		Batata();
};

Batata::Batata()
{
	i = -8;
}

void Batata::printname()
{
	std::cout << name << '\n';
}

int	main()
{
	Batata wow;
	int *a = (int *)&wow;

	*a = 5;
	wow.name = "good potato";
	wow.printname();
	wow.printbatata();
	wow.printstr("wow\n");
}
