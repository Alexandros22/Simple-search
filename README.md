# Simple-search
Search a number in an array of numbers with recursion

In order to run the code in Linux environment after you clone that project:

## Step 1

Build/Create an executable : gcc -o search Array_search.c 

## Step 2

Run the executable using: ./search

Then you will be asked to provide the number of rows and the number of collumns.  
After that you will need to add the elements of the array.  
When insertion is done you will give the number that you want to search for in  
the array. 

The recursive function will search for the element into the array and inform  
the user if it does exist.  

An example of an execution that the number that the user is looking for is not  
found: 

> Give the number of the rows:1  
> Give the number of the columns:4  
> Give the 0 0 number:1  
> Give the 0 1 number:4  
> Give the 0 2 number:6  
> Give the 0 3 number:8  
> Give the number that you want:10

> This number does not excist!!

An example of an execution that the number the user is looking for is in the array: 

> Give the number of the rows:1  
> Give the number of the columns:4  
> Give the 0 0 number:1  
> Give the 0 1 number:2  
> Give the 0 2 number:10  
> Give the 0 3 number:24  
> Give the number that you want:10  

> The row is 1 and the column is 3!