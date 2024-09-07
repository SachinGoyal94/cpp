#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int changer(vector<int>& coins, int amount,int size,int coin,int count)
    {
        if(amount<coins[0])
        {
            return -1;
        }
        if((amount%coin)==0)
        {
            amount=amount-coin;
            if(amount==0)
            {
                return count+1;
            }
            return changer(coins,amount,size,coin,count+1); 
        }
        size--;
        return changer(coins,amount,size,coins[size-1],count);
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        sort(coins.begin(),coins.end());
        if(amount==0)
        {
            return 0;
        }
        if(amount<coins[0])
      {
            return -1;
        }
        
        int size=coins.size();
        int count=0;
        count=changer(coins,amount,size,coins[size-1],count); 
        return count;
    }
};
void solver(int n,int &sol,int &k)
    {
        if(n==0)
            return;
        int x=sqrt(k);
        if((x*x)==(k))
        {
            sol=n/x;
            n=n%x;
            int xx=sqrt(n);
            if(n!=0 && ((xx*xx)==n))
                solver(n,sol,n);
            if(n!=0 && ((xx*xx)!=n))
            {
                int g=n-1;
                solver(n,sol,g);
            }
            if(n==0)
                return;
        }
        else
        {
            int g=n-1;
            solver(n,sol,g);
        }
    }
int main()
{
    int sol=0;
    int k=9;
    while(k!=0)
        solver(9,sol,k);
    cout<<sol;
}