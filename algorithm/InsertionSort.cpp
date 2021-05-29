#include <stdio.h>

int main(void) {
	int i, j, temp;
	int array[10] = {1, 10, 5, 6, 7, 8, 4, 3, 2, 9};
	for(i=0; i< 9; i++){
		j = i;
		while(array[j] > array[j+1]){
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
	}
	for(i=0; i < 10; i++){
		printf("%d ", array[i]);		
	}
}
