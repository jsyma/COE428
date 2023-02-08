void mySort(int array[], unsigned int num_elements)
{
  int i, j, temp;
  
  for (i = 0; i < num_elements; i++){
    temp = array[i];
    j = i - 1;
    while(j >= 0 && array[j]>temp){
      array[j + 1] = array[j];
      j--;
    }
    array[j+1] = temp;  
  }
 
}
