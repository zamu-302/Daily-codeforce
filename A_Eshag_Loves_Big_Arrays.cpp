#include <iostream>
#include <vector>
#include <algorithm>

int main(){
int t;
std::cin>>t;

for(int i=0;i<t;++i){
int n;
std::cin>>n;
std::vector<int> nums(n);
int currMin=std::numeric_limits<int>::max();
for(int j=0;j<n;++j){
    std::cin>>nums[j];
    currMin=std::min(currMin,nums[j]);
}


int count=0;
for(int j=0;j<n;++j){
if(nums[j]!=currMin){
    count++;
}
}


std::cout<<count<<'\n';




}



    return 0;
}