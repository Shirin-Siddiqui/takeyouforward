/*
Problem Statement: Given an integer array sorted in non-decreasing order, 
remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, 
then the first k elements of the array should hold the final result. 
It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.
*/

/*
Optimal Solution - 
Time Complexity = O(N)
Space Complexity = O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int array[], int length){
    int i = 0;
    for(int j=1;j<length;j++){
        if(array[i] < array[j]){
            i++;
            array[i] = array[j];
        }
    }
    return i+1;
}
int main(){
    int array[] = {2,3,3,4,4};
    int length = sizeof(array) / sizeof(array[0]);
    int removedDuplicatelength = removeDuplicates(array,length);
    cout<<"The array after removing duplicate elements - ";
    for(int i = 0; i<removedDuplicatelength; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}