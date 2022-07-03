 #include<iostream>
 using namespace std;
 int a,b;
 int main(){
    cout<<"Enter the value of A:";
    cin>>a;
    cout<<"Enter the value of B:";
    cin>>b;
    cout<<(a+=5)<<endl;
    cout<<(b-=7)<<endl;
    cout<<(b*=b)<<endl;
    cout<<(a/=5)<<endl;
    cout<<(a>>=b);
 }