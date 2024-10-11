/*
Problem Statement - Left Rotate an array by D places
*/

#include<bits/stdc++.h>
using namespace std;

/*
Brute Solution - 
Time Complexity = O(nd)
Space complexity = O(d)
*/

void bruteleftRotateByD(int array[], int length, int d){
    vector<int> temp;
    d = d % length;
    for(int i = 0;i<d;i++){
        temp.push_back(array[i]);
    }
    
    int k = length - d;
    for(int i = 0;i<length;i++){
        if(i < k){
            array[i] = array[i + d];  
        }
        else{
            array[i] = temp[i - (length - d)];
        }
    }
}

/*
Optimal Solution - 
Time Complexity = O(n)
Space complexity = O(1)
*/

void Reverse(int array[], int start, int end){ // Because the Reverse takes half the size of the array being passed to compute it.
    int temp;
    while(start <= end){
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

void optimalleftRotateByD(int array[], int length, int d){
    Reverse(array, 0, d-1);
    Reverse(array, d, length-1);
    Reverse(array, 0, length-1);
}

int main(){
    int array[] = {1,2,3,4,5,6,7};
    int d = 4;
    int length = sizeof(array) / sizeof(array[0]);
   // bruteleftRotateByD(array,length,d);
    optimalleftRotateByD(array, length, d);
    for(int i = 0;i<length;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}