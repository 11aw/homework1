/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    

int m = 3;
    int n = 4;
    int a[m][n];
    int min = 9;
    int max = 0;
   
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            a[i][j] = rand()%10;
        }
    }
   
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
   
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            if(a[i][j]<min){
                min=a[i][j];
            }
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    cout<<"Max: "<<max<<", min: "<<min<<endl;
    cout<<"Max - Min = "<<max-min;


}
