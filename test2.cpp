#include <iostream>
using namespace std;

class batata {
	private:
		int i = 0;
	public:
		void printbatata(void)
		{
		  std::cout << i;
		}
};


int	main()
{
	batata wow;
	int *a = (int *)&wow;

	*a = 5;
	wow.printbatata();
}