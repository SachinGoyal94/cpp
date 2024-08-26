//binary search is faster than linear search as finding page 123 page by page or taking mid of book
//will obviously lead to faster process 
//linear search take n time where binary search take order of time log n just keed in mind  no use 

# include<iostream>
# include<cmath>
# include<cstring>
using namespace std;
int main()
{
    int A[8]={11,12,13,14,15,16,17,18};  //ascending order must be there
    int key,l=0,h=7,mid;    //l,h are lower and highest index of array mid is middle iindex b/w l,h
    cin>>key;
    while(l<=h)             // if l>h key will not be founded
    {
        mid=l+(h-l)/2;      //as if l=INT_MAX and h=1 then mid=INT_MAX+1 due to which mid as an 
        if(key==A[mid])     //integer overflows out of the range but now it will not overflow
        {
            cout<<mid;
            return 0;
        }
        else
        {
            if(key<A[mid])     //now like if key =13 & mid=3, A[mid]=14 we need to reduce h so that
            {                  //mid come near key index
              h=mid-1;
            }
            else{
                if(key>A[mid])   // key =16 & mid=3 A[mid]=14 increase l so mid come near key index
                {
                    l=mid+1;
                }
            }
        }

    }
    cout<<"key not found";
    return 0;
}


