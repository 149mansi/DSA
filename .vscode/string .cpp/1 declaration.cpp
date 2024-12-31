#include<iostream>
using namespace std;
// bool compareString(string a,string b){
//     if (a.length()!=b.length())
//     {
//     return false;
//     }
//     else{
//         int j=0;
//         for (int i = 0; i < a.length(); i++)
//         {
//         if (a[i]!=b[j])
//         {
//         return false;
//         }
        
//         }
//         j++;
//     }
//     return true;
// }
int main(){
//     // create string
//     string str;
//     // input without spaces mansi
//     // cin>>str;
//     // use getline for spaces in:mansi utane
//     getline(cin,str);
//     // print
//     cout<<str;
//     // find length function
//     cout<<"length "<<str.length()<<endl;
//     cout<<"isempty"<<str.empty()<<endl;
//     str.push_back('A');
//     cout<<"is push back "<<str<<endl;
//     str.pop_back();
//     cout<<str<<endl;
//     cout<<str.substr(0,6)<<endl; /*very imp write up in book*/

// // compare
// string a="Love";
// string b="Lover";
// if (a.compare(b)==0)
// {
//     cout<<"a and b are exactly same strings"<<endl;

// }
// else{
//     cout<<"a and b are not same"<<endl;
// }
// string x="cbcd";
// string y="bgda";
// cout<<x.compare(y)<<endl;
    

// string z="bbbb";
// string t="bbbb";
// cout<<z.compare(t)<<endl;

// string sentence="hello i am mansi";
// string target="himanshu";
// // cout<<sentence.find(target)<<endl;
// if (sentence.find(target)==string::npos)
// {
// cout<<"not found"<<endl;
// }
// // use d replace function
string strs="This is very nice girl";
string word="mansi";
strs.replace(0,4,word);
cout<<strs<<endl;

// erase
string strss="this is abcedsdsd";
strss.erase(0,4);
cout<<strss;

    return 0;

}

