#include<iostream>
#include<cstring>
using namespace std;
int getLength(char name[]){
    int length=0;
    int i=0;
    while (name[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
}
int main(){
    char name[100];
    cin>>name;
    cout<<"length is "<<getLength(name)<<endl;
    // function use for length
    cout<<"Length is "<<strlen(name)<<endl;
    return 0;
}