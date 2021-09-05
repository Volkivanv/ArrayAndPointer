#include <iostream>
void reverse(int* ar){
    for(int i = 0; i < 5; i++){
        int buf = *(ar+9-i);
        *(ar+9-i) = *(ar+i);
        *(ar+i)  = buf;
    }
}

int main() {
    int ar[10];
    for(int & i : ar){
        std::cin >> i;
    }
    reverse(ar);
    for(int & i : ar){
        std::cout << i << " ";
    }


    return 0;
}
