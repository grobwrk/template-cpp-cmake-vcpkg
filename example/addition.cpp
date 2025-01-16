#include <lib.hpp>

int main()
{
	int x = 2, y = 2;
	spdlog::info("we know that {}+{} is equals to {}", x, y, add(x, y));
	return EXIT_SUCCESS;
}
