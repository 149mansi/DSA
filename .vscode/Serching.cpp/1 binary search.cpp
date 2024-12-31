// binary search element
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int size,int target){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while (start<=end)
//     // start is less  than end loop ko challeo
//     // s>e then its grater or loop ko rok do or elment not found
//     {
//         int element=arr[mid];
//         if (element==target)
//         {
//             return mid;
//         }
//        else if (target<element)
//     //    searching in left
//        {
//         end=mid-1;
//        }
//         else
//         // searching in right
//         {
//             start=mid+1;
//         }
//         // for updateing 
//        mid=start+(end-start)/2; 
//     }
//     // element not found
    // return-1;
// }
// int main(){
//     int arr[]={2,4,6,8,10,12,14};
//     int size=7;
//     int target=2;
//     int indexOftarget=binarySearch(arr,size,target);
//     if (indexOftarget == -1)
//     {
//         cout<<"target not found"<<endl;
//     }
//     else
//     {
//         cout<<"target found at "<<indexOftarget<<endl;
//     }
//     return 0;
// }
// time complixity normal case:o(N^2)
// Best Case : o(n)
// worst case in reverse sorted array
 #include<iostream> 
 using namespace std;
 int binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
while (start<=end)
{
    int element=arr[mid];
    if (element==target)
    {
        return mid;

    }
    else if (target>element)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return -1;
 }
 int main(){
    int arr[]={2,4,5,6,7,8,9,};
    int size=7;
    int target=8;
    int indexoftarget=binarysearch(arr,size,target);
    if (indexoftarget==-1)
    {
    cout<<"Not found"<<endl;
    }
    else
    {
        
        cout<<"found"<<indexoftarget<<endl;
    }
    
 }