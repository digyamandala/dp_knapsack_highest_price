# dp_knapsack_highest_price
Dynamic Programming Knapsack to Get Highest Profit

<img src="https://latex.codecogs.com/gif.latex?f(0,&space;t)&space;=&space;0" title="f(0, t) = 0" />
<img src="https://latex.codecogs.com/gif.latex?f(x,0)&space;=&space;0" title="f(x,0) = 0" />
<img src="https://latex.codecogs.com/gif.latex?f(x,t)&space;=&space;max(f(x,&space;t-1),&space;f(x-w_t,&space;t-1)&space;&plus;&space;v_t)" title="f(x,t) = max(f(x, t-1), f(x-w_t, t-1) + v_t)" />

where
<img src="https://latex.codecogs.com/gif.latex?x-w_t\geq&space;0" title="x-w_t\geq 0" />

<img src="https://latex.codecogs.com/gif.latex?TimeComplexity:&space;O(NW)" title="TimeComplexity: O(NW)" />
