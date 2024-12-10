#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int count = 0;
    int leastsignificant= -1;
    int mostsignificant= -1;
    int i = 0;

    while(n>0)
    {
        if(n&1)
        {
            count++;
            if(leastsignificant==-1)
            {
                leastsignificant=i;
                mostsignificant=i;
            }
            i++;
            n=n>>1;
        }    
    }
    cout<<count<<"#"<<mostsignificant<<"#"<<leastsignificant<<endl;  
}
