/*
2. You have sorted array of numbers ( e.g. [1,4,5,7,8,10,20] ) 
Please implement a method which will search element 
in that array and return its index. 
( e.g. el = 7, print index => 3 ). Think about the most optimal solution.
*/

/*******************************************
For this task I used the algorithm of binary search
*******************************************/

#include <iostream.h>
#include <conio.h>

// binarySearch a recursive binary search function. 
int binarySearch(int arr[], int left, int right, int x)
{
   if (right >= left)
   {
        int middle = left + (right - left)/2;      // 
        if (arr[middle] == x)  
            return middle;
        if (arr[middle] > x) 
            return binarySearch(arr, left, middle-1, x);
        
        return binarySearch(arr, middle+1, right, x);
   }
   return -1; // if element is not found
}
 
int main(void)
{
   int arr[] = {1, 2, 5, 8, 9, 10, 16, 27, 35, 49, 54, 65};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x;
   
   cout << "Enter element for search " << endl;
   cin >> x;
   
   int result = binarySearch(arr, 0, n-1, x);
   
   if (result == -1)
     cout << "Element is not present in array" << endl;
   else
     cout << "Element is present at index " << result << endl;

   getch();
   return 0;
}
