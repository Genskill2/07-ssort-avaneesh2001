#include <stdio.h>

void swap_max(int arr[],int count,int n) {
  int max = -2147483648;
  int idx = 0;

  for(int i=n; i<count; i++)
  {
    if(max < arr[i])
    {
      max=arr[i];
      idx = i;
    }
  }

  int swap = arr[n];
  arr[n] = arr[idx];
  arr[idx] = swap;

}

void ssort(int arr[],int count){
  for (int i = 0; i < count; i++) {
    swap_max(arr,count,i);
  }
}
