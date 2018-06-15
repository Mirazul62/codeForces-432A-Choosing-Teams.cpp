#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a[100000],i,count=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        a[i]=a[i]+k;
    sort(a,a+n);
    for(i=0;i<n;i++)
       {
        if(a[i]<=5)
        count++;
        else
            break;
        }


    cout<<count/3;
}
