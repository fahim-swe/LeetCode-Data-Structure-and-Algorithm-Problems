#include <bits/stdc++.h>
using namespace std;


int majorityElement(int arr[], int n)
{
    int val = arr[0];
    int count = 1;

    for(int i = 0; i < n; i++){
        if(val == arr[i]){
            count++;
        }
        else{
            count--;
        }

        if(count == 0){
            count++;
            val = arr[i];
        }
    }
    return val;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int val = majorityElement(arr, n);
    int c = count(arr, arr+n, val);

    if(c > n/2){
        cout << val << endl;
    }
    else{
        cout << "No Majority Element exist\n";
    }
    
}