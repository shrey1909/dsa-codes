    #include<iostream>
    #include<algorithm>
    #include<vector>
    #include<string>
    #include<math.h>
    #include<utility>
    #include <__algorithm/reverse.h>
    #include<stack>
    #include<list>
    #include<map>
    using namespace std;





// check if a string is pallindrom
// int main(){
//     string str;
//     cin>>str;
//     int cnt=0;
//     int n = str.size();
//     for(int i=0;i<=n/2;i++){
//         if(str[i]==str[n-1-i])
//         cnt++;
        
    
//     }
//     if(cnt==n/2+1)
//     cout<<"yes"<<endl;
// else
// cout<<"no"<<endl;
// }








// //HASHING!!

// int main(){
//     int arr[100000];
   
//     int n;
//     cout<<"give the input in array";
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     //precomputation
//     int hasharr[100000];
//     for(int i = 0;i<n;i++){
//         hasharr[arr[i]] +=1;//main updatation! 
//     }
//     //fetching values from hasharray.....
//     cout<<"enter the number of queries";
    
//     int q;
//     cin>>q;
//     while(q--){
//         int num;
//         cout<<"enter the number to check";
//         cin>>num;
//         cout<<hasharr[num]<<endl;
//     } 
//}




// STl IN CPP
// VECTORS
//  void vectors(){
//     vector<int> vec;
    
//     for(int i=0;i<5;i++){
//         int num;
//         cin>>num;
//         vec.push_back(num);
//     }
//     //for size--
//     cout<<vec.size()<<endl;
//     // to remove last element
//     vec.pop_back();
    
//     // to resize
//     vec.resize(7); // all empty spaces will get value 0

//     // to point an element
//     cout<<*(vec.begin()+1)<<endl;// now it will point the 2 element and returns its value. * means value at.

//     // to delete all data in the vector.
//     vec.clear();
//     // to check if the vector is empty or not.
//     if(vec.empty()){ // boolean datatype.
//         cout<<"yes"<<endl;
//     }else{
//         cout<<"not empty"<<endl;
//     }

//     //to delete a particular element
//     vec.erase(vec.begin()+1);//this will erase the 2 element acc to 0 based indexing. 

//     // to inset an element
//     vec.insert(vec.begin()+1,8);//insert(position,value);
//     vec.push_back(4);
//     vec.insert(vec.begin(),3);
//      // to reverse an vector
//      reverse(vec.begin(),vec.end());// first position is inclusive while last one is exclusive.
     
//      // sort function
//       sort(vec.begin(),vec.end());

//       // to print a vector--
//       // method 1: using iterator

//       vector<int> :: iterator it = vec.begin();
//       for(it = vec.begin() ; it!= vec.end(); it++){
//         cout<<(*it)<<" ";
//       }

//       // method 2

//       for(int &value : vec){
//         cout<<value<<" ";
//       }

    
//  }

//  // STACK--LIFO
//  void stacks(){
//     // last in first out
//     stack<int> s;
//     s.push(4);
//     s.push(3);
//     s.push(2);
//     s.push(1);
//     // to print topmost or last inserted element.
//     cout<<s.top()<<endl;

//     // to remove the topmost element
//     s.pop(); 

//     //for size--
//     cout<<s.size()<<endl;

//     // to check if stack is empty or not 
//     if(s.empty()){
//         cout<<"yes empty"<<endl;
//     }else{
//         cout<<"not empty"<<endl; 
//     }

//     // to print the elements in stack
//     while(!s.empty()){
//         int val = s.top();
//         cout<<val<<" ";
//         s.pop();
//     }
//  }

//  //PAIRS
//  void pairs(){
//     pair<int,int> p;
//     p.first = 10;
//     p.second = 20;
//     cout<<"{"<<p.first<<","<<p.second<<"}";
    
//     // chaining in pairs--
//     pair<int,pair<int,int> > pt;
//     pt.first = 10;
//     pt.second.first = 20;
//     pt.second.second = 22;
//     cout<<"{"<<pt.first<<","<<"{"<<pt.second.first<<","<<pt.second.second<<"}}";

//     // vector of pairs--
//     vector<pair<int,int> > vec;
//     for(int i=0;i<6;i++){
//         int x,y;
//         cin>>x>>y; 
//         vec.push_back(make_pair(x,y));
//     }

//     for(int i=0;i<6;i++){
//         cout<<vec[i].first<<" "<<vec[i].second<<endl;
//     }

//  }

 // MAP
//  void maps(){
//     map<int , string> m; // maps store key in sorted order.
//     m[1] = "abc";
//     m[5] = "cdc";
//     m[3] = "acd";
//     m.insert(make_pair(4,"dsgre"));
//      //printing using iterator 

//     map<int,string> :: iterator it;
//     for(it = m.begin(); it!= m.end(); it++){
//         cout<<(*it).first<<" "<<(*it).second<<endl;
//     }
//     // // without using iterator
//     // for(auto &pr: m){
//     //     cout << pr.first <<" "<< pr.second << endl;
//     // }
//     // to find a particular element.
//      it = m.find(3);
//     if(it == m.end()){
//         cout <<"no value"<<endl;
//     }else{
//         cout << (*it).first <<" "<<(*it).second <<endl; 
//     }
//     // to erase
//     m.erase(3);// erase using key.

//     // UNORDERED MAP

//     unordered_map<int,string> um;// rest all functions are same---


//  }
//  codeforces 514A GOOD STRING CONCEPT.
 //  int main(){
//   string s;
//   cin>>s;
//   // for first no.
//   int firstNo = s[0] - '0';
//   if(firstNo >4 && firstNo!=9){
//     s[0] = ((9-firstNo)+'0');
//   }
// for(int i=1;i<s.size();i++){
//     int num = s[i]-'0';
//     if(num>4){
//         s[i] = ((9-num)+'0');
//     }
// }
// cout<<s<<endl;
//  }

//BITWISE OPERATOR--

// for power of 2 use left shift ex: for 2^20 we can write a = (1<<20)

/* set bit = 1
unset bit = 0
binary number's idx are done oppo. to that of an arr.
to check if Nth bit is set or not use & with no having onlt Nth bit set and all other 0.
and to find no lets say having only 4th bit set --(1<<4)ie. 1000(in binary).   
*/
// tilda operator '~' used to invert the binary.
/*
to check if a bit is set or not

if(a & (1<<i) !=0){for Ith bit--
cout<<"set bit"<<endl;
} else{
    cout<<"unset bit"<<endl;
}
*/
// to set a bit-- a | (1<<1);
// to unset a bit -- a & (~(1<<3));
// to toggle a bit -- a ^ (1<<2); to toogle the second bit.
//__builtin_popcount(5); inbuilt function to count set bits.

void evenOdd(int n){
     if(n & 1){
        cout<<"odd"<<endl;
     }else{
        cout<<"even"<<endl;
     }
}

/*NOTE:
1. to divide n by 2 use right shift. divide by 2 once (n>>1)
2. to multiply by 2 use left shift. multiply by 2 once (n<<1)
*/

/*
in lowercase bit before msb is set(1) while in uppercase bit before msb is unset(0)).
so to convert lower to upper just unset the 5th bit. 
*/

/* XOR OPERATOR
xor of simillar numbers is zero.
xor of number with zero is number itself. 
** x^y^z == x^z^y == y^z^x  (Hence xor is associative in nature).


*/

void convertOpposite(string& str)
{
    int ln = str.length();
 
    // Conversion according to ASCII values
    for (int i = 0; i < ln; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }
}


void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i) & 1);
    }
    cout<<endl;
}


// BINARY SEARCH.......


 int binSearch(int key,vector<int> arr){
        int start = 0,  end = arr.size() - 1;

        while(start<=end){
            int mid = (start+end)/2;

            // comparisons
            if(arr[mid]==key){//found
                return mid;
            }   //binSearch has a time complexity of O(logn).

            if(arr[mid]<key){//right
                start = mid+1;
            }else{
                end = mid-1;///left
            }
        }
          return -1;//if key doesnt exit;
      }


    int perfectSquare(int n){
            int arr[n];
            for(int i=1;i<=n;i++){
                arr[i] = i;
            }
            int start = 1 ;
            int end = n;

        while(start<=end){
            int mid = (start+end)/2;

            if(arr[mid]*arr[mid]==n){
                return mid;
            }  

            if(arr[mid]*arr[mid]<n){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
          return -1;
    }
// function for gcd
 int gcd(int a,int b){
     if(a%b == 0){
        return b;
     }

    return gcd(b, a%b);
 }

 // function for lcm

 int lcm(int a,int b){
    return (a*b)/gcd(a,b);
 }

 // Divisors


void pascalTriangle(int n , int r){

    // for getting num at r row and c column : (r-1)C(c-1). 
}

int nCr(int n,int r){
    int nfac = 1;
    int rfac = 1;
    for(int i=0;i<r;i++){
        nfac = nfac*(n-i);
        rfac = rfac*(r-i);
    }
    return nfac/rfac;
}




 
// SLIDING WINDOW (fixed lenth)
// class Solution { 
// public:


                            // SLIDING WINDOW / 2 pointer

// 1.Constant window

//a. maximum subarray with given sum k.
//     long long maximumSubarraySum(vector<int>& nums, int k) {
//         long long sum = 0, n = nums.size(), ans = 0;
//         map<long long, long long> mp; 
//         for(int i = 0;i < n;i++){
//             if(i >= k){
//                 sum -= nums[i-k];
//                 if(--mp[nums[i-k]] == 0) mp.erase(nums[i-k]);
//             }
//             sum += nums[i];
//             mp[nums[i]]++;
//             if(mp.size() == k) ans = max(ans, sum);
//         }
//         return ans;
//     }
// };


    void printDivsors(int num){
    for(int i=1;i*i<=num;i++){
        if(num%i==0 ){
            cout<< i <<" " << num/i<<" "<<endl;
        }
    }

 }

    bool isPrime(int num){
        for(int i=2;i*i<=num;i++){
            if(num%i==0) return false;
        }
        return true;
    }

    void printPrime(int num){

        for(int i=2;i*i<=num;i++){
            if(num%i==0 ){
                if(isPrime(i)) cout<< i <<" ";
                if(isPrime(num/i)) cout<<(num/i)<<" ";
            }

        }
        cout<<endl;

    }


    int main(){

        printPrime(780);
 

    }

    // abcdefghijklmnohdhdscudsgdjhdjydjny

