#include <iostream>

using namespace std;

namespace {
	class Maximum {
	public:
		//Constructor
		Maximum () = default;

		//Methods
		/*!
		 * @brief					-	Returns the bigger value of the two arguments
		 * @param[in] const T& a	-	First argument
		 * @param[in] const T& b	- 	Second argument
		 * @return		T			-	Return of type T */
		template<typename T>
		T max(const T& a, const T& b)
		{
			return (a > b) ? a : b;
		}

		//Destructor
		~Maximum () = default;
	};
}
