// print name 5 times 

// #include <iostream>
// using namespace std;

// void printName(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<"tanishq"<<endl;
//     printName(i+1,n);
// }
// int main(){
//     int i;
//     int n;
//     cin>>n;
//     printName(i,n);
// }

// print from 1 to n

// #include <iostream>
// using namespace std;

// void printNumbers(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<i<<endl;
//     printNumbers(i+1,n);
// }

// int main(){
//     int i;
//     int n;
//     cin>>n;
//     printNumbers(i,n);
// }


// print n to 1

// #include <iostream>
// using namespace std;

// void printnumbers(int i,int n){
//     cout<<n<<endl;
//     i=0;
//     if(i<n){
//         n--;
//         printnumbers(i,n);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int i;

//     printnumbers(i,n);
// }


// print 1 to n by bactracking

// #include <iostream>
// using namespace std;

// void numBacktrack(int i, int n){
//     if(i<1){
//         return;
//     }
//     numBacktrack(i-1,n);
//     cout<<i<<endl;
// }

// int main(){
//     int i;
//     int n;
//     cin>>n;

//     i=n;
//     numBacktrack(i,n);
// }


