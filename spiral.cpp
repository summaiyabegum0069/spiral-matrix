#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cout << "enter the number of rows";
    cin >> n;
    cout <<  "enter the number of columns";
    cin >> m;
    vector<vector<int>> matrix(n,vector<int>(m));
    cout << "enter matrix elemnts";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrix[i][j];
        }
    }
    int top=0,bottom=n-1;
    int left=0,ryt=m-1;
    while(top<=bottom && left<=ryt)
    {
        //print top elements
        for(int i=left;i<=ryt;i++)
        {
            cout << matrix[top][i] << " ";
            top++;
        }
        // print ryt elemments
        for(int j=top;j<=bottom;j++)
        {
            cout << matrix[j][ryt] << " ";
            ryt--;
        }
        // print bottom elements  
        for(int i=ryt;i>=left;i--)
        {
            cout << matrix[i][bottom] << " ";
            bottom--;
        }
        // print left elements
        for(int j=bottom;j>=top;j++)
        {
            cout << matrix[j][left] << " ";
            left++;
        }
        cout << endl;
        return 0;

    }
}