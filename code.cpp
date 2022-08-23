#include"iostream"
using namespace std;
main()
{
    int n,k=0,m=0;
    int ar[6];
    
    cin>>n;
    while(n>0)
    {
    for(int i=0;i<6;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<6;i++)
    {
        k=max(ar[i],k);
    }
    cout<<k<<endl;
    n--;
}
    
    //cout<<m<<endl;
}
