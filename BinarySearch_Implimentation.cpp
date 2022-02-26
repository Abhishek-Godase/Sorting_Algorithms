#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int sz,int key){
    int start = 0;
    int e = sz-1;

    while(start<=e){
        int mid = (start+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid] > key){
            e=mid-1;
        }
        else{
            start =mid+1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int sz =sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key to search :";
    cin>>key;

    int x = binarySearch(arr,sz,key);

    if(x!=(-1)){
        cout<<key<<" is present at index "<<x<<endl;
    }
    else{
        cout<<key <<" not found "<<endl;
    }

    return 0;
}
