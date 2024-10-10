/*
Given an array arr, return the second largest distinct element from an array. If the second largest element doesn't exist then return -1.
*/

/*

Optimal Solution -

Time Complexity = O(N)
Space Complexity = O(1)

*/

#include<bits/stdc++.h>
using namespace std;

int secondlargest(int array[], int length){
    if(length<2) return -1;
    else if(length == 2 && array[0] == array[1]) return -1;
    
    
    int largest = std::numeric_limits<int>::min();
    int secondlargest = std::numeric_limits<int>::min();
    
    for(int i=0;i<length;i++){
        if(array[i] > largest){
            secondlargest = largest;
            largest = array[i];
        }else if(array[i] > secondlargest && array[i] != largest){
            secondlargest = array[i];
        }
    }
    
    return secondlargest;
}

int main(){
    int array[] = {2,5,1,3,0};
    int length = sizeof(array) / sizeof(array[0]);
    cout<<"The Second Largest element is - "<<secondlargest(array,length)<<endl;
}