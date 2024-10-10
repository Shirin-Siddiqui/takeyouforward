/*
Problem Statement: Given an array of N integers, left rotate the array by one place.

Example 1:
Input:
 N = 5, array[] = {1,2,3,4,5}
Output:
 2,3,4,5,1
Explanation:
 
Since all the elements in array will be shifted 
toward left by one so ‘2’ will now become the 
first index and and ‘1’ which was present at 
first index will be shifted at last.

*/
#include<bits/stdc++.h>
using namespace std;

void leftrotateby1(int array[], int length){
    int temp = array[0];
    for(int i=0; i<length-1; i++){
        array[i] = array[i+1];
    }
    array[length-1] = temp;
}

int main(){
int array[] = {1,2,3,4,5};
int length = sizeof(array) / sizeof(array[0]);
leftrotateby1(array,length);
cout<<"The array after one left rotation = ";
for(int i=0;i<length;i++){
    cout<<array[i]<<" ";
}
cout<<endl;
}
