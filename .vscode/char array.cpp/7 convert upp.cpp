// convert lowercase to uppercase
// #include<iostream> 
// #include<cstring>
// using namespace std;
// void convertIntoUpperCase(char arr[]){
//     int n=strlen(arr);
//     for (int i = 0; i < n; i++)
//     {
//         arr[i]=arr[i]-'a'+'A';

//     }
    
    

// }

// int main(){
//     char arr[100]="mansi";
//     convertIntoUpperCase(arr);
//     cout<<arr<<endl;
// } 


#include<iostream>
#include<cstring>
using namespace std;
void convertUpperCase(char arr[]){
int n=strlen(arr);
for (int i = 0; i < n; i++)
{
    arr[i]=arr[i]-'a'+'A';
}

}

int main(){
    char arr[100]="mansi";
    convertUpperCase(arr);
    cout<<arr<<endl;
}