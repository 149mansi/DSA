// #include<iostream>
// using namespace std;

// int partition(int arr[], int s, int e){
//     //step1: choose pivotElemnt
//     int pivotIndex=s;
//     int PivotElement = arr[s];

//     // step2 : find correct position for pivot Element and place it there 
//     int  count =0;
//     for (int i = s+1; i <=e; i++)
//     {
//         if (arr[i]<=PivotElement)
//         {
//             count++;
//         }
        
//     }
//     // jab mai loop se baher hua, toh mere pass pivot ki right position ka index ready hai
// int correctIndex = s+count;
// swap(arr[pivotIndex], arr[correctIndex]);

// // step3: 

// }
// void quickSort(int arr[], int s, int e){
//     // base case
//     if (s>=e)
//    return;

// //    partition logic return pivotiNDEX
// int p = partition(arr,s,e);

// // Recursive call
// // pivot element=>left
// quickSort(arr,s,p-1);

// // pivot Element => right
// quickSort(arr, p+1, e);
    
// }
// int main(){
//     int arr[]={8,1,3,4,20,50,30};
//     int n=7;
// }


#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    // step1: choose pivoteelemnt
    int pivotIndex=s;
    int pivotElement = arr[s];

    // step2: find right position for pivot element and place it there

    int count =0;
    for (int i = s+1; i <=e; i++)
    {
    if (arr[i]<=pivotElement)
    {
        count++;
    }
    
    }
    // jab main loop se baher hua , toh mere pass pivot ki right position ka index ready hai
    int rightIndex = s+count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // step3:left me chote and right me bade
    int i=s;
    int j=e;

    while (i<pivotIndex && j>pivotIndex)
    {
        while (arr[i]<=pivotElement)
        {
            i++;
        }
        while (arr[j]>pivotElement)
        {
            j--;
        }
        // 2 case ho saket hai
        // A -> you found the elemnts to swap
        // b-> no need to swap
        if (i<pivotElement && j> pivotElement)
        {
            swap(arr[i], arr[j]);
        }
        return pivotIndex;
        
    }
    

}
void quickSort(int arr[], int s, int e){
    // base case
    if (s>=e)
    
        return;
    
    // partition logic return pivotIndex
    int p = partition(arr, s,e);

    // recursive calls
    // pivot elemnent=>left
    quickSort(arr,s,p-1);

    //pivot element=> right
    quickSort(arr,p+1, e);
    
}
int main(){
    int arr[]={8,1,3,4,20,50,50,50,50, 50,50,50,50,50,30};
    int n=15;
int s=0;
int e=n-1;
    quickSort(arr, s, e);


    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}