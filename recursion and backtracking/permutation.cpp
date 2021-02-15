#include<bits/stdc++.h>
using namespace std;
void permutation(string & s,int l,int e)
{
    if(l==e){cout<<s<<endl;return;}
    else{
        for(int i=l;i<=e;i++)
        {
            swap(s[i],s[l]);
            permutation(s,l+1,e);
            swap(s[i],s[l]);
        }
    }
}
int main()
{
    string s;
    cout<<"Enter the size of the string:";
    int a;cin>>a;
    cout<<"Enter the string:";
    cin>>s;
    permutation(s,0,a-1);
}