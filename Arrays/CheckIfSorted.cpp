/*
Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not.
If the array is sorted then return True, Else return False.

Example 1:
Input:
 N = 5, array[] = {1,2,3,4,5}
Output
: True.
Explanation:
 The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.
*/

#include<bits/stdc++.h>
using namespace std;

/*
Optimal Solution - 

Time Complexity - O(N)
Space Complexity - O(1)

*/
bool checkSort(int array[], int length){
    int j=1;
    for(int i = 0; i<length-1;i++){
        if(array[i]>array[j]){
            return false;
        }
        j++;
    }
    return true;
}

int main(){
    int array[] = {0,1,2,3,4,5};
    int length = sizeof(array) / sizeof(array[0]);
    cout<<"The array is sorted - "<<checkSort(array,length)<<endl;
}