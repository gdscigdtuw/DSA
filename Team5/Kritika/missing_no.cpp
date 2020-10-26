MISSING NUMBER FROM LIST
---------------------------------------------------------------------
Given a series of numbers ..you have to find the missing number
---------------------------------------------------------------------

// C++ program of above approach 
#include<iostream> 
using namespace std; 
  
class misno
{ 
      
/* getMissingNo takes array and 
size of array as arguments*/
public : int getMissingNo (int a[], int n) 
{ 
    int i, total; 
    total = (n + 1) * (n + 2) / 2;  
    for ( i = 0; i< n; i++) 
        total -= a[i]; 
    return total; 
} 
}; 
  
/*Driver code */
int main() 
{ 
    misno m; 
    int a[] = {1, 2, 4, 5, 6}; 
    int miss = g=m.getMissingNo(a, 5); 
    cout << miss; 
} 
  
