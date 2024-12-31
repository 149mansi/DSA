// Program to implement memset ( ) function in C++  
  
#include <iostream>  
#include <cstring>            
 // header file that contains the memset ( ) function, without it            
// we cannot able to access the use of memset ( ) function  
using namespace std ;  
  
int main()  
{  
    char st [ ] = " JavaTpoint " ;  
    char ch ;  
    cout << " Printing the given string : " << st << endl ;  
    cout << " Enter an alphabet from which you want to replace the each charater of the given string : " ;  
    cin >> ch ;  
    memset ( st , ch , sizeof ( st ) ) ;  
    cout << " Printing the string after replacing the each character of the string with the given substitute : " << endl ;  
    cout << " " << st ;  
    return 0 ;  
}  


// / In this above example, we have seen how each of the characters of the string 'JavaTpoint' 
// has been converted into the single alphabet passed by a user. Here the space is also
//  considered as a single character.