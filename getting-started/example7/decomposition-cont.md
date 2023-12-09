Example 7: Next steps with decomposition - Your first day on the job
You have just gotten a position as a salesperson for the ExerShoe company, specializing in high-end exercise shoes costing around $225 per pair. Your boss has given you three options for compensation, which you must choose before you begin your first day:

Straight salary of $600 per week;
A salary of $7.00 per hour plus a 10% commission on sales;
No salary, but 20% commissions and $20 for each pair of shoes sold
You, being an expert C++ programmer, figure you can write a program to help decide the best choice of compensation.

A common approach in doing decomposition for a larger program is to create a main function that reads like an outline to solving the problem. Then, we write the functions to do each task.

Here is a first pass at the main program:

```cpp
  GetInput(WeeklySales);
  CalcMethod1(WeeklySales);
  CalcMethod2(WeeklySales);
  CalcMethod3(WeeklySales); 
```

See if you can implement each of these functions, before you look at our [solution](https://developers.google.com/edu/c++/solutions/1-10).