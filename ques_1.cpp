#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the Row: ";
    cin>>m;
    int n;
    cout<<"Enter the column: ";
    cin>>n;
    // int arr[m][n];
    vector<vector<int>>v(m,vector<int>(n));
    // array input
    cout<<"Enter the elemnt of array: "<<endl;
    for(int i = 0; i< m; i++)
    {
        for(int j =  0; j<n; j++)
        {
            cin>>v[i][j];
        }
    }
    // array output
    cout<<"the array is: "<<endl;
    for(int i = 0; i< m; i++)
    {
        for(int j =  0; j<n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    // find 0 element
    int row[m] = {0};
    int column[n] = {0};
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n;j++)
        {
            if(v[i][j] ==0)
            {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }
    // turning the 0Th element column and row zero
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n;j++)
        {
            if(row[i] == 1 || column[j] == 1) v[i][j] = 0;
        }
    }

    // printing after setting 0
    cout<<"the final array is: "<<endl;
    for(int i = 0; i< m; i++)
    {
        for(int j =  0; j<n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}