//anjali bisht
// linear search used to find whether the given no. is present or not if present then at what location it occurs.
#include<iostream.h>
using namespace std;
int main()
{
    int key,i,n,arr[];
    cout<<"enter n nos.";
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cin>>key;
    for(i=0,i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<< key << "is present at location"<< i+1 <<"in the array";
            break;
        }

    }


    else(i == n)
    {
        cout<< key<<" isn't preasent in array";
    }    
    return 0;

        
        }


         
