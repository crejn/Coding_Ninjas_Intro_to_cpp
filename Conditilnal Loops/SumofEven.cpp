Sum of Even Numbers till N
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12

/************************************************** SOLUTION *****************************************************************************/

#include<iostream>
using namespace std;


int main(){
	
    int N;
    cin>>N;
    int n=2;
    int sum=0;
    int num=0;
    while(n<=N){
        if(n%2==0){
            num=n;
            sum=sum+num;
        }
        n=n++;
    }
    cout<<sum<<endl;
}


