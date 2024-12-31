#include<iostream>
using namespace std;
char getGrade(int marks){
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
for (int i = 1; i <=100; i++)
{
    char ans = getGrade(i);
    cout<<"Grade for marks: "<<i<<"is"<<ans<<endl;

}
return 0;
}
