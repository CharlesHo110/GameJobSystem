
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <functional>
#include <string>
#include <algorithm>
#include <chrono>
#include <glm.hpp>


namespace coro {
	void test();
}

namespace func {
	void test();
}

namespace mixed {
	void test();
}


int main()
{
	mixed::test();

	std::string t;
	std::cin >> t;
}


