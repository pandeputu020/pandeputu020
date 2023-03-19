#include <iostream>
#include <bits/stdc++.h>
//Binary Search Program With Recursive Method//
using namespace std;
int mid;
//function //
int binarySearch(int arr[], int p, int lft, int rgt){
    while (lft <= rgt){
         mid = lft +  (rgt - lft) / 2;
        //if array equal to mid then return mid//
        if (arr[mid] == p){
            return mid;
        }
        //if array mid bigger than p then change the declaration//
        else if (arr[mid] > p ){
            return binarySearch(arr, p, lft, mid-1);
        }
        // if array mid smaller than p then change the declaration//
        else if (arr[mid] < p){
            return binarySearch(arr, p, mid+1, rgt);
        }
    }

}


int main() {
    int i, num, search, n, result;
    // take size array from user input//

    cout << "enter the size of the array = ";
    cin >> num;
    
    //reminder how number user must input//
    int arr[num];
    cout << "enter " << num << " numbers." << endl;
     //print the space of index that user input//
    for (i = 0; i < num; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    //print the number in the array space//

    for (i = 0; i < num ; i++)
    {
        cout << arr[i] << " " << endl;
    }

   //print the array that user has been input//

    cout << "Sorted array are : " << endl;

    for (i = 0; i < num; i++)
    {
        cout << arr[i] << endl;
    }
    
    //reminder size of array that user input//
    n = sizeof(arr) / sizeof(arr[0]);
    cout << "size of array " << n << endl;
    //take input from number that user want to search in array//
    cout << "enter the number you want find : " << endl;
    cin >> search;

    // return the function to searching number//
    result = binarySearch(arr, search, 0, n-1);
    if (result == -1){
        cout << "Number is not in array";
    }
    else{
        cout << "Number is found in index " << result;
    }
        
    return 0;
}
