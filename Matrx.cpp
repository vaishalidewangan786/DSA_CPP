/*
Matrix: It is a 2D array...
implementation : array_type array_name[row][column]
*/

// implementation
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int matrix[3][3];
// taking input...
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cin>>matrix[i][j];
    }
    cout<<endl;
}
// printing matrix...
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"Searching of a element"<<endl;
int t;
cin>>t;
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
     if(t==matrix[i][j]){
         cout<<"present"<<endl;
     }
    }
   
}
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"All Matrix operation"<<endl;
cout<<"Matrix 1 input"<<endl;
int r1,c1;
cout<<"input no of row and column "<<endl;
cin>>r1>>c1;
int matrix1[r1][c1];
for(int i=0; i<r1; i++){
    for(int j=0; j<c1; j++){
        cin>>matrix1[i][j];
    }
    cout<<endl;
}
cout<<"Matrix 2 input"<<endl;
int r2,c2;
cout<<"input no of row and column "<<endl;
cin>>r2>>c2;
int matrix2[r2][c2];
for(int i=0; i<r2; i++){
    for(int j=0; j<c2; j++){
        cin>>matrix2[i][j];
    }
    cout<<endl;
}
cout<<"for addtion input 1 and for subtraction inpur 2 "<<endl;
int t;
cin>>t;
switch(t){
    case 1:{
        cout<<"Addition"<<endl;
    if(r1==r2 && c1==c2){
    for(int i=0; i<r2; i++){
    for(int j=0; j<c2; j++){
        cout<<matrix1[i][j]+matrix2[i][j]<<" ";
    }
    cout<<endl;
    break;
} 
        }
        else{
            cout<<"Can't perform"<<endl;
        }
   
    }

case 2:{
    cout<<"subtraction"<<endl;
     if(r1==r2 && c1==c2){
    for(int i=0; i<r2; i++){
    for(int j=0; j<c2; j++){
        cout<<matrix1[i][j]-matrix2[i][j]<<" ";
    }
    cout<<endl;
    }
     }
    break;
} 
case 3:
cout<<"Multiplication"<<endl;
int pos=0;
int matrix3[r1][c2]={0};

   for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
        for( int k=0; k<c1; k++){
      matrix3[i][j]+= matrix1[i][k]*matrix2[k][j];
        }
    }
    }
    
    
    for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
        cout<<matrix3[i][j]<<" ";
    }
    cout<<endl;
    }
    break;

 
}


    return 0;
}
*/




// double pointer array

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// int m=2,n=3;
// int *arr[m];
// for(int i=0; i<m; i++){
//     arr[i]=new int [n];
//     for(int j=0;j<n;j++){
//         arr[i][j]=i;
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
//     return 0;
// }

// vector of array
/*
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>arr[], int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}
int main(){
    int m=3, n=2;
vector<int>arr[m];
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++)
    arr[i].push_back(i);
}
print (arr,m);
    return 0;
}
*/
//vector of vector
/*
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}
int main(){
vector<vector<int>>arr;
int m=3,n=2;
for(int i=0; i<m; i++){
    vector<int> v;
    for(int j=0; j<n; j++){
        v.push_back(i);
    }
    arr.push_back(v);
}
print(arr);
    return 0;
}

*/
// spriral printing....
/*
#include<iostream>
using namespace std;

int main(){
int arr[4][4]={{1,2,3,4,},
               {5,6,7,8},
               {9,10,11,12},
               {13,14,15,16}};

     for(int i=0; i<4; i++) {
         int j=-1; int l=4;
        for(int k=0; k<4; k++){
             if(i==0 || i%2==0){
                
                 cout<<arr[i][++j]<<" ";
               
             }
             else{
                
                 cout<<arr[i][--l]<<" ";
                 
             }
        }  
     }         
return 0;
}
*/


// border element...
/*

#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=4;
    int c=4;
int arr[r][c]={{1,2,3,4,},
               {5,6,7,8},
               {9,10,11,12},
               {13,14,15,16}};

    if(c==1){
        for(int i=0; i<r; i++){
           cout<<arr[i][0]<<" ";
        }
    }           
    else if(r==1){
        for(int i=0; i<c; i++){
           cout<<arr[0][i]<<" ";
        }
    }
    else{
        for(int i=0; i<c; i++){
            cout<<arr[0][i]<<" ";
        }
        for(int i=1; i<r; i++){
            cout<<arr[i][c-1]<<" ";
        }
        for(int i=c-2; i>=0; i--){
            cout<<arr[r-1][i]<<" ";
        }
        for(int i=r-2; i>0; i--){
            cout<<arr[i][0]<<" ";
        }
    }
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=4;
    int c=4;
int arr[r][c]={{1,2,3,4,},
               {5,6,7,8},
               {9,10,11,12},
               {13,14,15,16}};
     for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){
             if(i<j){
                 int temp= arr[i][j];
                 arr[i][j]= arr[j][i];
                 arr[j][i]= temp;
             }
         }
     }
     for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
         }

     return 0;          
}

*/


/*
#include<bits/stdc++.h>
using namespace std;
const int r=4;
const int c=4;
void clockwise(int arr[r][c]){
     int temp[r][c];
    cout<<"clockwise"<<endl;
     for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){
             temp[i][j]=arr[i][j];
         }
         }
     for(int i=0; i<r; i++){
          for(int j=0; j<c; j++){
              arr[i][j]=temp[3-j][i];
          }
      }
      for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
      }
}
void anticlockwise(int arr[r][c]){
    cout<<"anti-clockwise"<<endl;
     int temp[r][c];
      for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){
             temp[i][j]=arr[i][j];
         }
         }
     for(int i=0; i<r; i++){
          for(int j=0; j<c; j++){
              arr[i][j]=temp[j][3-i];
          }
      }
      for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
      }
}
int main(){
 
int arr[r][c]={{1,2,3,4,},
               {5,6,7,8},
               {9,10,11,12},
               {13,14,15,16}};
           
    
    

anticlockwise(arr);
return 0;
}



*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int r=4, c=4;
// int arr[r][c]={{1,2,3,4,},
//                {5,6,7,8},
//                {9,10,11,12},
//                {13,14,15,16}};
//     int t=0;
//     int ri=c-1;
//     int l= 0;
//     int b= r-1; 
//     while(t<=b && l<=ri){

//          for(int i=l; i<=ri; i++){
//             cout<<arr[t][i]<<" ";
          
//         }
//           t++;
//         for(int i=t; i<=b; i++){
//             cout<<arr[i][ri]<<" ";
//         }
//             ri--;
//         if(t<=b){
//         for(int i=ri; i>=l; i--){
//             cout<<arr[b][i]<<" ";
//         }
//              b--;
//         }
//         if(l<=ri){
//         for(int i=b; i>=t; i--){
//             cout<<arr[i][l]<<" ";
//         }
//          l++;}

//     }

//     return 0;
// }

/*



#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

const int R = 4, C = 4;

void printSpiral(int mat[4][4], int R, int C)
{
	int top = 0, left = 0, bottom = R - 1, right = C - 1;

	while(top <= bottom && left <= right)
	{
		for(int i = left; i <= right; i++)
			cout << mat[top][i] << " ";

		top++;

		for(int i = top; i <= bottom; i++)
			cout << mat[i][right] << " " ;
		
		right--;

		if(top <= bottom){
		for(int i = right; i >= left; i--)
			cout << mat[bottom][i] << " ";

		bottom--;
		}

		if(left <= right){
		for(int i = bottom; i >= top; i--)
			cout << mat[i][left] << " ";

		left++;
		}			
	}
}

int main()
{	
	int arr[R][C] = {{1, 2, 3, 4},
				    {5, 6, 7, 8},
				    {9, 10, 11, 12},
				    {13, 14, 15, 16}};

  printSpiral(arr, R, C);

	return 0;
}

*/


// finding elements in shorted row and shorted colomn matrix...
/*
 #include<bits/stdc++.h>
 using namespace std;
const int R=4,C=4;
bool check(int arr[R][C], int x){
    int t= 0, r=3;
    while(t<4 && r>=0){
        if(x==arr[t][r]){
           return 1;
        }
        else if(x>arr[t][r]){
            t++;
        }
        else if(x<arr[t][r]){
            r--;
        }
    }
    return 0;
}
 int main(){
int arr[R][C] = {{1, 2, 3, 4},
				    {5, 6, 7, 8},
				    {9, 10, 11, 12},
				    {13, 14, 15, 16}};
    int a;
    cin>>a;
    cout<<check(arr ,a)<<endl;

     return 0;
 }
 */



// median of row wise sorted array..

//  #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//    int R=3, C=5;
// int arr[R][C] = {{1, 2, 3, 4,5,6},
//                  {9, 10, 11, 12,13,14},
// 				    {5, 6, 7, 8,6,7} 
// 				   };
//   int min=INT_MAX;
//   int max=INT_MIN;
//   for(int i=0; i<R; i++){
//     if(min>arr[i][0]){min=arr[i][0];}
//     if(max<arr[i][C]){max=arr[i][C];}
//   }
//   int med=((R*C)+1)/2;
//   while(min<max){
//     int mid=(min+max)/2;
//     int pos=0;
//     for(int i=0; i<R; i++){
//         pos+=upper_bound(arr[i],arr[i]+C,mid)-arr[i];
//     }
//     if (mid < med)
// 			min = mid + 1;
// 		else
// 			max = mid;
// 	}

//     cout<<min<<endl;
//   }
 



// sorting of matrix row wise and column wise...


















// prefix sum of 2D array..

#include <bits/stdc++.h> 

using namespace std;

const int R = 2, C = 2;

long long prefix[R+1][C+1];
// long long prefix[R+1][C+1];
void presum(int arr[R][C]){


for(int i=1; i<=R; i++){
    for(int j=1; j<=C; j++){
        cout<<arr[i-1][j-1]<<" "<<prefix[i-1][j]<<" "<<prefix[i][j-1]<<" "<<prefix[i-1][j-1]<<endl;
        prefix[i][j]= arr[i-1][j-1]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
    }
}
 
for(int i=1; i<=R; i++){
    for(int j=1; j<=C; j++){
       cout<< prefix[i][j]<<" ";
    }
    cout<<endl;
}

}

int main()
{	
	int arr[R][C] = {
                    {1, 2},
				    {5, 6}};

  presum(arr);

	return 0;
}


// sum from index ab to cd is given by  presum[c][d]-presum[a-1][d]-presum[c][b-1]+presum[a-1][b-1]