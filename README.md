Average.cpp 
This program coalculates the sum and avergae of five numbers. 
    1. Identify the five variables: 28,32,37,24,33
    NOTE: use bouble variable to identify these numbers 

    2. Add all of it together then divide it by 5 
        a.define it as double sum 
        b.define average as double average 

    3. Use "std:: cout <<" for the output 

NOTE: make sure to add a return 0 so program know it was a success 


Ocean_levels.cpp
This program calculates the oceal level rise after 5,7, and 10 years usng the rate 1.5. 
    1. Identify the variables and the rate using "const" for named constants 

    2. Make the formula before putting it in the output 
    a. double after5years = risePerYear * year5

    3. Put the formula in the output using "std:: cout <<"

Program and test	
    a.Average — Assigned Values : 28,32,37,24,33
    b.Average — Changed values : 30,35,40,55,22
    c.Ocean — Assigned rate : 1.5
    d.Ocean — Changed rate : 2.2
    
Expected Results 
    a.30.8
    b.36.4
    c.7.5,10.5,15
    d.11,15.4,22
Actual Results
    a.30.8
    b.36.4
    c.7.5,10.5,15
    d.11,15.4,22

All of them were a match. After I tested usng different values I restored the assigned values. 


1.) Why should the five values and the average use the double data type?

Using a double data type for both the use of the average and the five values ensures that the result is accurate because an average is not always a whole number. 

2.) Trace the assigned values through sum and average.

    a. The values added together is 154. 
    b. The average will be the sum divided by the total number of values which is 5. 
    c. The average is 30.8 (154/5).


3.) Why should the average calculation divide the completed sum rather than only the final value?

An average is normally calculated by adding all the values together to get the final result. Only dividing by the final value will not be accurate and only gets the average of the final value, not the total of all the values. 

4.) Explain how the ocean-level calculations use the annual rate and number of years.

The ocean levels rises 1.5 millimeter per year(1) and the calclutions are determine how many times it increases by the number of years(2). 

(1)const double risePerYear = 1.5;
(2)double after5Years = risePerYear * year5;


5.) Why is the annual ocean-level rate a good candidate for a named constant?

The annual ocean-level rate is a good candidate for a named constant because it represents that the rate stays the same even when the number of years increases. Making the annual rate a constant prevents the value from being changed when calculating the millimeters after x number of years. 

6.) Why does the assignment require calculations to be stored before using cout?

Storing calculations before using cout makes it easier to read in case there are any errors that need debugging. 


    