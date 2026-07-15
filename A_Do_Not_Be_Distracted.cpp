#include <iostream>
#include <unordered_set>

int main(){
int t;
std::cin>>t;


for(int i=0;i<t;i++){
    int num;
    std::cin>>num; 
    std::string word;
    std::cin>>word;
    bool flag=true;
    std::unordered_set<char> seen;
    seen.insert(word[0]);
    for(int j=1;j<num;j++){
        
        if(seen.contains(word[j])&&word[j-1]!=word[j]){
            flag=false;
            break;
        }
        seen.insert(word[j]);

    }
    if(flag){
        std::cout<<"YES"<<std::endl;
    }
    else{
        std::cout<<"NO"<<std::endl;
    }

}


}