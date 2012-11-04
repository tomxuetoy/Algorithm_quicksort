/* quickSort.cpp : Defines the entry point for the console application.
 * check below link to get intuitive feelings:
 * http://www.algolist.net/Algorithms/Sorting/Quicksort
 * */
#include "stdio.h"

void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
 
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      }; 

      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

int main(int argc, char* argv[])
{
    int i,k,n;
    n=9;
    int array[9];
    printf("quick sort algorithom ,array with 9 items: ");
    for(i=0; i<n; i++) {
        printf("please input array[%d] value: ",i);
        scanf("%d",&k);
        array[i]=k;
    }
    //打印排序前内容
    printf("current array value: ");
    for(i=0; i<n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");

    //排序
    quickSort(array,0,8) ;

    //打印排序后内容
    printf("sorted array value: ");
    for(i=0; i<n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
