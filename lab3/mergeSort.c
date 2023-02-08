#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
    {
      int m = (first + last)/2;
      if (first < last){
	mySort(array, first, m);
	mySort(array, m + 1, last);
	mergeSort( array,first, m, last);
      }
    }
void mergeSort(int array[],int first,int m,int last){
	int i, j ,k;
	int n1 = m - first + 1;
	int n2 = last - m;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++){
	  L[i] = array[first + 1];
	  for (j = 0; j < n2; j++){
	    R[j] = array[m + 1 + j];
	  }
	}
	i,j = 0;
	k = first;
	while (i < n1 && j < n2){
	  if (L[i] <= R[j]){
	    array[k] = L[i];
	    i++;
	  }
	  else{
	    array[k] = R[j];
	    j++;
	  }
	  k++;
	}
}

      
	
     
   
