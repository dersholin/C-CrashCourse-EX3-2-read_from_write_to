#include <iostream>

char read_from(char* characters,size_t position)
{
	if (position >= strlen(characters) || position < 0)
	{
		std::cout << "out of range..." << std::endl;
		return '\0';
	}
	std::cout << characters[position] << std::endl;
	return characters[position];
}

void write_to(char* characters,size_t position,char element)
{
	if (position >= strlen(characters) || position < 0)
	{
		std::cout << "out of range..." << std::endl;
		return;
	}
	characters[position] = element;
	std::cout << "ok..." << std::endl;
	return;
}

int main()
{
	char lower[] = "abc?e";
	char upper[] = "ABC?E";
	char* upper_ptr = upper;
	//lower[3] = 'd';
	//upper[3] = 'D';
	//char letter_d = lower[3];
	//char letter_D = upper[3];
	//lower[7] = 'g';										// 編譯器可通過但執行時發生錯誤
	//printf("lower : %s \nupper : %s", lower, upper);
	std::cout << "write_to function test..." << std::endl;
	std::cout << "write_to(lower, 3, 'd') => ";
	write_to(lower, 3, 'd');
	std::cout << "write_to(upper, 3, 'D') => ";
	write_to(upper, 3, 'D');
	std::cout << "write_to(lower, 8, 'h') => ";
	write_to(lower, 8, 'h');
	std::cout << "write_to(lower, -1, 'x') => ";
	write_to(lower, -1, 'x');
	std::cout << "lower : " << lower << std::endl;
	std::cout << "upper : " << upper << std::endl;
	std::cout << std::endl << "read_from function test..." << std::endl;
	std::cout << "read_from(upper, 2) => ";
	char read=read_from(upper, 2);
	std::cout << "read_from(upper, 9) => ";
	read= read_from(upper, 9);
	std::cout << "read_from(upper, -2) => ";
	read = read_from(upper, -2);
	std::cout << "finish..." << std::endl;
}