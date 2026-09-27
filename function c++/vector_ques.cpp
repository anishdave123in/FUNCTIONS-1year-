#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> v={3,6,15,17,21,25,55,100,200,550};
int count=0;
for(int i=0;i<v.size();i++){
    if(v[i]%5==0 && v[i]%3==0){
        count++;
    }
}  
cout<<count<<endl;
}
;;ulltoa