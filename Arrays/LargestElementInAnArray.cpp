/*
Problem Statement: Given an array, we have to find the largest element in the array.

Example 1:
Input:
 arr[] = {2,5,1,3,0};
Output:
 5
Explanation:
 5 is the largest element in the array. 

Example2:
Input:
 arr[] = {8,10,5,7,9};
Output:
 10
Explanation:
 10 is the largest element in the array. 
*/

/*

Brute Solution - 
Time Complexity = O(N*log(N)) because sorting complexity is nlogn
Space Complexity = O(N) because we initialized a new vector to store the result of sorting

*/ 

#include<bits/stdc++.h>
using namespace std;

int brutesortArray(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}


/*

Optimal Solution - 
Time Complexity = O(N)
Space Complexity = O(1)

*/

int optimalsolution(int array[], int length){
    int max = -1;
    for(int i=0; i<length; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int main(){
    vector<int> arr1 = {2,5,1,3,0};
    cout<<"The Largest element in the array using brute algorithm is : "<<brutesortArray(arr1)<<endl;

    int array[] = {2,5,1,3,0};
    int length = sizeof(array) / sizeof(array[0]);
    cout<<"The Largest element in the array using optimal algorithm is : "<<optimalsolution(array, length)<<endl;
}