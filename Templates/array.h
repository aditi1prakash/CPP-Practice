#include <iostream>

using namespace std;

/*!
 * @brief		-	Template class
 * @details		-	A template type T to indicate type of array elements and size_t type N to indicate the size
*/
template <class T, size_t N>
class Array {
    private:
        T arr[N];
    
    public:
        T getSize() const { return N; } /*! Getter method for size */
        /*! Method to read array element */
        T readArrayElement(size_t index) const 
        {
            if (index < N)
            {
                return arr[index];
            }
            else
            {
                throw std::out_of_range("Index out of bounds");
            }
        }
        /*! Method to write array element*/
        void writeArrayElement(size_t index, T value)
        {
            if(index < N)
            {
                arr[index] = value;
            }
            else
            {
                throw std::out_of_range("Index out of bounds");
            }
        }
};