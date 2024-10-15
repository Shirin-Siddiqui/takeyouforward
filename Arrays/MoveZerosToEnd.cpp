/*
Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end
of the array and move non-negative integers to the front by maintaining their order.

Example 1:
Input:
 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
Output:
 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
Explanation:
 All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

*/

#include<bits/stdc++.h>
using namespace std;

void moveZero(int array[], int length){
    int i = 0;
    int j= 1;
    int temp;
    for(int k = 0; k<length-1; k++){
        if(array[i] == 0 && array[j] != 0){
            //swap the elements
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j++;
            
        }else if(array[i] == 0 && array[j] == 0){
            j++;
        }else{
            i++;
            j++;
        }
        
    }
}

int main(){
    int array[] = {1,0,2,3,0,4,0,1};
    int length = sizeof(array) / sizeof(array[0]);
    moveZero(array, length);
    cout<<"All Zeros Moved Array = ";
    for(int i = 0; i<length; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}