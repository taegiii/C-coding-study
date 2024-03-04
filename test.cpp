#include <iostream>

void printNum(int w, int num)
{
	std::cout.width(w);
	std::cout << num << std::endl;
}

void printBar(void)
{
	std::cout << "------" << std::endl;
}

int main() {
	
	int A, B;

	std::cin >> A >> B;

	printNum(6, A);
	printNum(6, B);
	printBar();
	printNum(6, A * (B % 10));
	printNum(5, A * ((B / 10) % 10));
	printNum(4, A * (B / 100));
	printBar();
	printNum(6, A * B);


    


	return 0;
}