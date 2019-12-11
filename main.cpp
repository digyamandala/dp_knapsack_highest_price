#include <iostream>
#include <vector>

using namespace std;

/*
  Calculate highest profit with bag of n kg
  using DP-knapsack

  f(x,y) = max(f(x,y-1), f(x-w(y), y-1) + v(y))
*/

int max_price[100][100];

void knapsackTable(int* weights, int*prices, int capacity, int n_things) {
  max_price[0][0] = 0;

  for(int i = 0 ; i < 100 ; i++) {
    max_price[i][0] = 0;
  }

  for(int x = 1 ; x <= capacity ; x++) {
    for(int k = 1 ; k <= n_things ; k++) {
      if(x - weights[k] >= 0) 
        max_price[x][k] = max(max_price[x][k-1], max_price[x-weights[k]][k-1] + prices[k]);
      else
        max_price[x][k] = max_price[x][k-1];
    }
  }
}

int max(int a, int b) {
  if(a > b) return a;
  return b;
}

int main() {

  int prices[100];
  int weights[100];

  prices[0] = 0;
  prices[1] = 6;
  prices[2] = 5;
  prices[3] = 4;
  prices[4] = 6;
  prices[5] = 4;

  weights[0] = 0;
  weights[1] = 5;
  weights[2] = 4;
  weights[3] = 3;
  weights[4] = 7;
  weights[5] = 4;

  int capacity = 14;
  int n_things = 5;

  knapsackTable(weights, prices, capacity, n_things);

  for(int i = 0 ; i <= capacity ; i++) {
    cout << "Max profit for bag with " << i << " kg" << ": $" << max_price[i][n_things] << endl;
  }

  return 0;
}