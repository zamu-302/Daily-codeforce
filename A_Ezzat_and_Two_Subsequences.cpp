#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

int main(){
int t;
std::cin>>t;
for(int i=0;i<t;i++){
    std::vector <int> nums;
    int k;
    std::cin>>k;
    
    for(int j=0;j<k;j++){
        int num;
        std::cin>>num;
        nums.push_back(num);
    }
    std::sort(nums.begin(),nums.end());
    double total=0;
    for(int j=0;j<k-1;j++){
        total+=nums[j];
    }
total=double(total)/(k-1);
total+=nums[k-1];
std::cout << std::fixed << std::setprecision(9);
std::cout<<total<<'\n';
}



    return 0;
}