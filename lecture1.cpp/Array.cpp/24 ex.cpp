// find that triplet that upon addtion that gives value sum
// if arr[]={10,20,30,40,60}
// sum=70
// output={10,20,40}
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr{10,20,30,40};
//     int sum=80;
//     for (int i = 0; i <arr.size(); i++)
//     {
//         int element1=arr[i];
//         for (int j = i+1; j <arr.size(); j++)
//         {
//         int element2=arr[j];
//         for (int k= j+1; k <arr.size(); k++)
//         {
//             int element3=arr[k];
//             if (element1+element2+element3==sum)
//             {
//             cout<<element1<<","<<element2<<","<<element3<<","<<endl;
//             }
            
//         }
        
//         }
        
//     }
    

// }


// for four pair(10,20,30,40)
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr{10,20,30,40,50,60};
int sum=100;
for (int i = 0; i < arr.size(); i++)
{
    int element=arr[i];
    for (int j=i+1; j< arr.size(); j++)
    {
        int element2=arr[j];
        for (int k = j+1;  k< arr.size(); k++)
        {
            int element3=arr[k];
            for (int z= k+1; z <arr.size(); z++)
            {
                int element4=arr[z];
                if (element+element2+element3+element4==sum)
                {
    
            
                cout<<"found "<<element<<","<<element2<<" ,"<<element3<<" ,"<<element4<<","<<endl;
            
                }
                
            }
            
            
        }
        
    }
    
    
}

}