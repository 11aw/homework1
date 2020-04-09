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
    int n = 3;
    int a[m][n];
    int sum1 = 0;
    int sum2 = 0;
   
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
            if((i==0&j==0)||(i==1&j==1)||(i==2&j==2))
                sum1+=a[i][j];
            if((i==0&j==2)||(i==1&j==1)||(i==2&j==0)){
                sum2+=a[i][j];
            }
        }
    }
   
    cout<<"Main diagonal: " << sum1 << endl << "Second diagonal: " << sum2;


}
