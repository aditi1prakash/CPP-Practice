#include <iostream>
#include <cstdlib>

using namespace std;


int* apply_all (const int* const array1, size_t arr1_size, const int* const array2, size_t arr2_size);
void print (const int* const array, size_t size);

int main ()
{
	/* Declare and initialize arrays */
	int array1[]{1, 2, 3, 4, 5};
	int array2[]{10, 20, 30};

	/*Declare and initialize array sizes */
	const size_t array1_size{5};
	const size_t array2_size{3};

	/* Print Array 1 */
	cout << "Array 1: ";
	print (array1, array1_size);

	/* Print Array 1 */
	cout << "Array 2: ";
	print (array2, array2_size);

	/* Get the multiplication results from the function */
	int *result = apply_all(array1, array1_size, array2, array2_size);
	constexpr size_t result_size {array1_size * array2_size};

	/* Print the results */
	cout << "Result: ";
	print (result, result_size);

	/* Delete the dynamic memory on heap*/
	delete [] result;

	return 0;
}

/*
 * @brief: Multiply two arrays and store it on the heap
 * @param: const int* const array1	-	constant pointer to first constant array
 * 		   size_t arr1_size			-	size of array1
 * 		   const int* const array2	-	constant pointer to second constant array
 * 		   size_t arr2_size			- 	size of array2
 * @return: int* new_array			-	address of the first element in new array
 */
int* apply_all (const int* const array1, size_t arr1_size, const int* const array2, size_t arr2_size)
{
	int* new_array{nullptr};
	new_array = new int[arr1_size * arr2_size];

	int index{0};

	for(size_t arr2 = 0; arr2 < arr2_size; arr2++)
	{
		for(size_t arr1 = 0; arr1 < arr1_size; arr1++)
		{
			new_array[index++] = (array2[arr2] * array1[arr1]);
		}
	}

	return new_array;
}

/*
 * @brief: Function to print the array
 * @param: const int* const array	-	constant pointer to constant array
 * 		   size_t size 				-	size of the array passed
 * @return: NONE
 */
void print (const int* const array, size_t size)
{
	cout << "[";
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << "]" << endl;
}
