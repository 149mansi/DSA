// uppercase to lowercase
// #include<iostream>
// #include<cstring>
// using namespace std;
// void lowercase(char arr[]){
// int n=strlen(arr);
// for (int i = 0; i <n; i++)
// {
//     arr[i]=arr[i]-'A'+'a';
// }

// }
// int main(){
//  char arr[100]="MANSI";
//  lowercase(arr);
//  cout<<"lowercase is: "<<arr<<endl;
// }


#include<iostream>
#include<cstring>
using namespace std;
void convertIntoLowercase(char arr[]){
    int n=strlen(arr);
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i]-'A'+'a';
    }
    
}
int main(){
    char arr[100]="MANSI";
    convertIntoLowercase(arr);
    cout<<"LowerCaseis: "<<arr<<endl;
}