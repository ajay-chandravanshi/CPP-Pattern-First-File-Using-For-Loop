#include <iostream>
using namespace std;
int main() {
    for(int r=1;r<=5;++r)
    {
        int tem=r;
        
        for(int c=1;c<=5;++c)
        {
            if(c<=r)
            {
                
                cout<<tem;
                tem++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}