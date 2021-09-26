// anjali bisht
// jump search
#include<iostream.h>
using namespace std;
bool jumpsearch(int arr[],int n, int key, int &cnt)
{
    int l = 0;
    int m = sqrt(n);
    while(a[min(m,n)-1]<key)
    {
        l = m;
        m = 2*m;
        cnt++;
        if(l >= n)
        {
             return false;

        }
    }
     
     for (int i=1; i<min(m,n); i++)
     {
         cnt++;
         if(a[i] == key)
         {
             return true;

         }
     }
     return false;
}
 int main()
 {
     int t;
     cin>>t;
     while (t--)
     {
         int n,k;
         cin>>n;
         int*a = new int[n];
         for(int i=0;i<n;i++)
         cin>>a[i];
         cin>>k;
         int cnt=0;
         bool ispresent = jumpsearch(a,n,k,cnt);
         if (ispresent)
         cout<<"present"<<cnt<<endl;
         else
         cout<<"not present"<<cnt<<endl;
         }
     
     return 0;
 }