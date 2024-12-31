#include<iostream>
#include<cstring>
using namespace std;
bool checkpalindrome(char word[]){
    int i=0;
    int n=strlen(word);
    int j=n-1;
    while (i<=j)
    {
       if (word[i]!=word[j])
       {
      return false;
       }
       else{
        i++;
        j--;
       }
    }
    
}
int main(){
    char word[100]="racecar";
    cout<<"palidrome check: "<<checkpalindrome(word)<<endl;
}