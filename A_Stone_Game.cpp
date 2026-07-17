#include <iostream>
#include <vector>
#include <algorithm>
int main(){
int t;
std::cin>>t;
for(int i=0;i<t;i++){
int n;
std::cin>>n;
std::vector<int> nums(n);
for(int j=0;j<n;j++){
    std::cin>>nums[j];
}
auto begin=nums.begin();
auto end=nums.end();
auto small=begin;
auto big=begin;

for(auto it=begin+1;it!=end;++it){
if(*it>*big){
    big=it;
}
if(*it<*small){
    small=it;
}
}

int l=std::min(big-begin,small-begin);
int r=std::max(big-begin,small-begin);
std::cout<<std::min({r+1,n-l,n+1+l-r})<<std::endl;

}

    return 0;
}
