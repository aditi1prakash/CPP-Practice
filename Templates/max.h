#include <iostream>

using namespace std;

namespace {
	class Maximum {
	public:
		//Constructor

		//Methods
		template<typename T>
		T max(const T& a, const T& b)
		{
			return (a > b) ? a : b;
		}

		//Destructor
	};
}
