#include <iostream>


int main(){
int t;
std::cin>>t;
for(int i=0;i<t;i++){
int n,r;
std::cin>>n>>r;
if((r+r-1)>n){
    std::cout<<-1<<'\n';
}
else{
int r_index=0;
bool sameRow=false;
for(int row=0;row<n;row++){
    if(row%2==1){
        std::cout<<std::string(n,'.')<<'\n';
        continue;
    }
    std::string temp;
    sameRow=false;
    for(int col=0;col<n;col++){
        
        if((col==r_index)&&(!sameRow)&&(r!=0)){
            sameRow=true;
            temp+='R';
            r_index+=2;
            r--;
            continue;
        }
        temp+='.';

    }
    std::cout<<temp<<'\n';
}
}

}

return 0;
}