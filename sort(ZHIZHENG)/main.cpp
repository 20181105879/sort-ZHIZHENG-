
#include <iostream>
using namespace std;
int n=10;
void ssortthp(int s[],int n);

int main(int argc, const char * argv[]) {
    // insert code here...
   int *s=new int [n];
    for(int i=0;i<n;i++)
    {
       cin>>s[i];
    //   s[i]=1000-(i+1)*8;
    }
    ssortthp(s,n);

    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    
    
    return 0;
}
void ssortthp(int s[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j<n-1;j++)
        {
            if(s[j]>s[j+1])
            {
                int t=s[j+1];
                s[j+1]=s[j];
                s[j]=t;
            }
        }
    }

}

