// sorting 0 and 1
#include<iostream>
#include<vector>
using namespace std;

    void printArray(vector<int> arr) {
	for(auto i:arr) {
		cout << i << " ";
	}
	cout << endl;
}
int main(){
vector<int>arr{1,0,0,0,1,1,0,0,1};
    int start;
    int end=arr.size()-1;
    int i=0;
    while (i!=end)
    {
        cout<<"for i="<<i<<"start="<<start<<"end"<<end<<endl;
        if (arr[i]==0)
        {
            cout<<"found zero"<<endl;
            cout<<"before swap";
            printArray(arr);
        swap(arr[start],arr[i]);
        cout<<"after swap";
        printArray(arr);
        start++;
        i++;
        cout<<"now i"<<i<<"start="<<start<<"end"<<end<<endl;
        }
        else
        {
            cout<<"found One"<<endl;
            cout<<"before swap";
            printArray(arr);
            swap(arr[i],arr[end]);
            cout<<"after swap";
            printArray(arr);
            end--;
            cout<<"now i = "<<i<<"start"<<start<<"end"<<end<<endl;
        }
        
    }
    // print
     for(auto val : arr) {
		cout << val << " ";
	}
   return 0; 
}

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>arr{1,0,0,1,0,1,0,0};
// int start=0;
// int end=arr.size()-1;
// int i= 0;
// while (i!=end)
// {
//     if (arr[i]==0)
//     {
//         swap(arr[start],arr[i]);
//         start++;
//         i++;
//     }
//     else
//     {
//         swap(arr[end],arr[i]);
//         end--;
//     }
    
// }
// //   for(auto val : arr) {
// // 		cout << val << " ";
// // 	}
// //    return 0; 
// for (int i = 0; i < arr.size(); i++)
// {
//     cout<<arr[i]<<" ";
// }

//  }
