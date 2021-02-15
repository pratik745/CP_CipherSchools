//moves can be either one step down or one step to the right.
#include<bits/stdc++.h>
using namespace std;
bool isSafe(int i,int j,int r,int c,vector<vector<int>>& v)
{
    return (i<(r) && j<(c) && v[i][j]==1);
}
bool checkPath(vector<vector<int>> &v,int i,int j,int r,int c,vector<vector<int>> &sol)
{ 
    if(i==(r-1) && j==(c-1)){sol[i][j]=1;return true;}
    if(isSafe(i,j,r,c,v)==true)
    {
        sol[i][j]=1;
        if(checkPath(v,i+1,j,r,c,sol)==true){return true;}
        else if(checkPath(v,i,j+1,c,r,sol)==true){return true;}
        sol[i][j]=0;
    }
    return false;
}
void printpath(vector<vector<int>> &v , int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int r,c;
    cout<<"Enter the rows:";cin>>r;
    cout<<"Enter the columns:";cin>>c;
    vector<vector<int>> v;
    vector<vector<int>> sol(r,vector<int>(c,0));
    for(int i=0;i<r;i++)
    {
        vector<int> v1;
        for(int j=0;j<c;j++)
        {
            int k;cin>>k;
            v1.push_back(k);
        }
        v.push_back(v1);
    
    }
    if (checkPath(v,0,0,r,c,sol)==true){cout<<"Path exist!!"<<endl;printpath(sol,r,c);}
    else{cout<<"Path does not Exist!!";}

}