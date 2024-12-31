#include <iostream>  
#include <cstring>             // header file that contains the memset ( ) function, without it //we cannot able to access the use of memset ( ) function   
using namespace std ;  
int main()  
{  
    int arr [100] ;  
    int n , i , p ;  
    cout << " Enter size of an integer array: " ;   
    cin >> n ;  
    cout << " Enter an array elements: " << endl ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
        cin >> arr [ i ] ;  
    }  
     cout << " Printing the given array : " << endl ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
        cout << " " << arr [ i ] << endl ;  
    }  
    cout << " Enter an integer value from which you want to replace the each charater of the given string : " ;  
    cin >> p ;  
    memset ( arr , p , sizeof( arr ) ) ;  
    cout << " Printing the array after replacing the each value of the array with the given substitute : " << endl ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
        cout << " " << arr [ i ] << endl ;  
    }  
  
    return 0 ;  
}  

// In this above example, we have seen how each of the characters of the string 'JavaTpoints' 
// has been converted into the integer value passed by a user. Here the space is also considered 
// as a single character. Here the integer value only 0 and -1 is considerable, which implies that
//  each character of the string is converted into the 0's and -1's only, instead of using other 
//  integer values, will result in a garbage value, which implies that if you have entered 2, 
//  then all the characters of the string has been replaced by a garbage value.

