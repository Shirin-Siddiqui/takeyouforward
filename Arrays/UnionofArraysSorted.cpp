/*
Example 1:
Input:

n = 5,m = 5.
arr1[] = {1,2,3,4,5}  
arr2[] = {2,3,4,4,5}
Output:

 {1,2,3,4,5}

Explanation: 

Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5} 

Example 2:
Input:

n = 10,m = 7.
arr1[] = {1,2,3,4,5,6,7,8,9,10}
arr2[] = {2,3,4,4,5,11,12}
Output:
 {1,2,3,4,5,6,7,8,9,10,11,12}
Explanation:
 
Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1,6,7,8,9,10
Distnict Elemennts in arr2 are : 11,12
Union of arr1 and arr2 is {1,2,3,4,5,6,7,8,9,10,11,12}
*/

#include<bits/stdc++.h>
using namespace std;


vector<int> UnionArray(int array1[], int array2[], int n, int m){
    int i = 0,j = 0;
    vector <int> Union;
    while(i<n && j<m){
        if(array1[i] < array2[j]){
            if(!Union.empty()){
                if(Union.back() == array1[i]){
                    i++;
                }else{
                    Union.push_back(array1[i]);
                    i++;
                }
            }else{
                Union.push_back(array1[i]);
                i++;
            }
            //i++
        }
        else if(array1[i] > array2[j]){
            if(!Union.empty()){
                if(Union.back() == array2[j]){
                    j++;
                }else{
                    Union.push_back(array2[j]);
                    j++;
                }
            }
            else{
                Union.push_back(array2[j]);
                j++;
            }
            //j++
        }
        else if(array1[i] == array2[j]){
            Union.push_back(array1[i]);
            i++;
            j++;
        } 
    }
    while(i<n){
        Union.push_back(array1[i]);
        i++;
    }
    while(j<m){
        Union.push_back(array2[j]);
        j++;
    }

    return Union;
}

int main(){
    int array1[] = {2,3,4,4,5,11,12};
    int array2[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(array1) / sizeof(array1[0]);
    int m = sizeof(array2) / sizeof(array2[0]);
    vector<int> Union = UnionArray(array1,array2, n, m);
    for( size_t i = 0; i < Union.size(); ++i){
        cout << Union[i] << " ";
    }
    cout<<endl;
    return 0;
}