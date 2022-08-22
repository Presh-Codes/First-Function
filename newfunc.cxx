#include <iostream>

int times2 (int x){
    return x*2;
}

int main(){
    
    std::cout << times2 (8) << "\n";
    std::cout << times2 (16)<< "\n";
    std::cout << times2 (32)<< "\n";
    std::cout << times2 (64)<< "\n";
    std::cout << times2 (128)<< "\n";
    
}