#include<bits/stdc++.h>
using namespace std;


int LinearSearch(int array[], int num, int length){
    for(int i=0; i<length; i++){
        if(array[i] == num){
            return i+1;
        }
    }
    return 0;
}

int main(){
    int array[] = {1,2,3,4,5};
    int num = 7;
    int length = sizeof(array) / sizeof(array[0]);
    cout<<LinearSearch(array, num, length);
    cout<<endl;
    return 0;
}