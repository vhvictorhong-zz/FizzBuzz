//
//  main.c
//  FizzBuzz
//
//  Created by Victor Hong on 9/12/16.
//  Copyright © 2016 Victor Hong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float target = 101;
    
    for (int i = 1; i < target; i++) {
        
        int divisionByThree = i % 3;
        int divisionByFive = i % 5;

        if (divisionByThree == 0 && divisionByFive == 0) {
            printf("FizzBuzz\n");
        } else if (divisionByThree == 0) {
            printf("Fizz\n");
        } else if (divisionByFive == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}
