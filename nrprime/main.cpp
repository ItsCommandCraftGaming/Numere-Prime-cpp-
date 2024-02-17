/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int t,i,x;
bool prim;

int main()
{
    cout<<"Pana la cat: ";
    cin>>x;
    if (x<=1) {
        cout<<"INVALID";
    } else {
    for (i=2;i<=x;i++){
        prim=true;
        for (t=2;t<=i/2;t++){
            if (i%t==0) {
                prim=false;
            }
       
        }
         if (prim) {
            cout<<i<<" ";
        }
    }}

    return 0;
}