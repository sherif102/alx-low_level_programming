#include <string.h>
/**
 * a_sorter - sorts the numbers in the array in ascending order
 * d_sorter - sorts the numbers in the array in descending order
 */
void a_sorter(int arr[], int size);
//void d_sorter(int arr[], int size);

//sort supplied arrays in ascending order
void a_sorter(int arr[], int size){

	int copy;

	//sort elements in array in ascending order
	int j = 0;
	while (j < size-1){

		for (int i = 0; i < size-1; i++){
			if (arr[i] > arr[i+1]){
				copy = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = copy;
			}
		}

		j++;
	}

	//print all elements in the array
	for (int j = 0; j < size; j++){
		printf("%d ", arr[j]);
	}
}




//sort supplied arrays in descending order

void d_sorter(int arr[], int size){

	int copy;

	//sort elements in array in ascending order
	int j = 0;
	while (j < size-1){

		for (int i = 0; i < size-1; i++){
			if (arr[i] < arr[i+1]){
				copy = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = copy;
			}
		}

		j++;
	}

	//print all elements in the array
	for (int j = 0; j < size; j++){
		printf("%d ", arr[j]);
	}
}
