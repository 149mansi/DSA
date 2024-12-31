#include<iostream>
using namespace std;
char getGrade(int marks){
//     if (marks>=90)
//     return 'A';
//         else if (marks>=80)
//         return 'B';
//         else if (marks>=60)
//         return 'C';
//         else if (marks>=40)
//          return 'D';
//          else
//          return 'F';
//         }
// We are also switch case 
switch(marks/10)
{
case 9: return 'A';
    break;
case 8: return 'B';
break;
case 6: return 'C';
    break;
case 4: return 'D';
break;

default: return 'F';
}
}
int main(){
    int marks;
    cout<<"Enter the Marks"<<endl;
    cin>>marks;
    // function call
    char finalgrade=getGrade(marks);
    cout<<finalgrade<<endl;
}