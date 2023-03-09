/* Problem Statement */
/*
There are 
N positive integers written on a blackboard: 
A1,....,An

Snuke can perform the following operation when all integers on the blackboard are even:
Replace each integer 
X on the blackboard by X divided by 2.
Find the maximum possible number of operations that Snuke can perform.
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    int a[201];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,count=0;
        cin>>x;
        while(x%2==0)
        {
            count++;
            x=x/2;
        }
        a[i] = count;
    }
    for (int i = 0; i < n; i++) {
           for (int j = i + 1; j < n; j++) {
               if (a[i] > a[j]) {
                   int temp;
                   temp = a[i];
                   a[i] = a[j];
                   a[j] = temp;
               }
           }
       }
    cout<<a[0]<<endl;
    return 0;
}
