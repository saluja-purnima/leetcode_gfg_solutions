#include <iostream>
using namespace std;
int main(){
    long int T;
    cin>>T;
    while(T--){
        long size;
        
        cin>>size;
        long int arr[size];
        for(long int i=0;i<size;i++){
            cin>>arr[i];
        }
        for (long int i=size-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}