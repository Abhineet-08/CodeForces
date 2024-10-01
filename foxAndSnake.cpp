#include<iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,m;
    cin>>n>>m;
    bool flag = true;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j = 0 ; j < m ; j++ )
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(flag==true)
            {
                for(int j = 0 ; j< m-1 ; j++ )
                    cout<<".";
                cout<<"#"<<endl;
                flag = false;
            }
            else
            {
                cout<<"#";
                for(int j=0;j<m-1;j++)
                    cout<<".";
                cout<<endl;
                flag = true;
            }
        }
    }
    return 0;
}