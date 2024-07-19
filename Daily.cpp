/*----------------12/7/24------------------*/

#include <bits/stdc++.h>
using namespace std;
void largestele(int arr[])
{
    int t = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (t < arr[i])
        {
            t = arr[i];
        }
    }
    cout << t << endl;
}
void second_largest_ele(int arr[])
{
    int l=INT_MIN;
    int sl=INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>=l){
            sl=l;
            l=arr[i];
        }
        else if(arr[i]>sl){
            sl=arr[i];
        }
    }
    cout<<sl<<endl;

}

void check_sorted(int arr[],int size){
    bool check=true;
    for(int i=1; i<size; i++){
        if(arr[i-1]>arr[i]){
            check=false;
            break;
        }
    }
    string a = (check==true)?"Yes":"NO";
    cout<<a<<endl;
}

void reverse(int arr[],int low,int size){
    int high=size-1;
    for(; low<high; ){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<' ';
    }
}

int main()
{
    int arr[5] = {1, 4, 7, 2, 9};
    int size=sizeof(arr)/sizeof(arr[0]);
    //largestele(arr);
    //second_largest_ele(arr);
    //check_sorted(arr,size);
    reverse(arr,0,size);
    return 0;
}