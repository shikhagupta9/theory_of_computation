#include <iostream>
using namespace std;

void modn(int n)
{
    
    int dfa[n][n];
    int row,col;
    col=0;
    for (int j=0; j<n; j++)
    {
        for (int k=0; k<n; k++)
        {
            dfa[j][k]=-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        dfa[i][col]=0;
        col=(col+1)%n;
        dfa[i][col]=1;
        col=(col+1)%n;
    }
    cout<<"\n{ ";
    for (int j=0; j<n-1; j++)
    {
        
        for (int k=0; k<n; k++)
        {
            if(dfa[j][k]!=-1)
            {
                cout<<"{"<<dfa[j][k]<<"}";
            }else
            {
                cout<<"{}";
            }
        }
        cout<<" , ";
    }
    
    for (int k=0; k<n; k++)
    {
        if(dfa[n-1][k]!=-1)
        {
            cout<<"{"<<dfa[n-1][k]<<"}";
        }else
        {
            cout<<"{}";
        }
    }
    cout<<" }"<<endl;
}


int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    modn(n);
  
    return 0;
}
