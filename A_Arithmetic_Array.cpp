#include <iostream>
#include <vector>
int main(){

    //my intital approach is if it's above in number we should add 0 to the end sum(nums)-n times while 1 if behind and 0 if equal
    int t;
    std::cin>>t;
    for(int i=0;i<t;i++){
        int n;
        std::cin>>n;
        int total=0;
        for(int j=0;j<n;j++){
            int num;
            std::cin>>num;
            total+=num;
        }
        if (total==n){
            std::cout<<0<<std::endl;
        }
        else if (total>n){
            std::cout<<total-n<<std::endl;
        }
        else{
            std::cout<<1<<std::endl;
        }
        

    }



}