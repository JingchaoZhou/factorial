#include "solution.h"
#include <iostream>


int Solution::recursiveFactorial(int n){
  if (n == 0){
    return 1;
  }
  else if (n < 0){
    return -1;
  }

  else{
    return n * recursiveFactorial(n-1);
  }
}

int Solution::nonRecursive(int n){

  if (n == 0 || n == 1){
    return 1;
  }
  else if (n < 0){
    return -1;
  }

  else{
    int m = 1;
    for (int i = 1; i <= n; i++){
      m = m * i;
    }
    return m;
  }

}

