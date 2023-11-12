//
//  main.cpp
//  multi-table
//
//  Prints a multiplication table
//  Created by TxMedic436 on 11/12/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    for(int row = 1; row < 11; row++){
        for(int col = 1; col < 11; col++){
            std::cout << row * col << "\t";
        }
        std::cout << std::endl;
    }
}
