# lab-03

1 & 2)	I can compare the next calculated value to the previous.
		If the next value is less than the previous then I know an overflow has occured.
		Overflows are caused by going beyond the limits of a particular type's range of values.
		When this occurs it "wraps around" to the other extreme of its range and continues on (which usually means garbage outputs).
		n = 256 causes an overflow
______________________________
Problem 1 & 2
______________________________
  n =        255
  sumShort:  32640

  OVERFLOW
  n = 256 causes an overflow

  n =        260
  sumShort:  -32640

  
3) n = 65536 causes an overflow
______________________________
Problem 3
______________________________
  n =        65535
  sumLong:   2147450880

  OVERFLOW
  n = 65536 causes an overflow

  n =        65540
  sumLong:   -2147450880


4) 	I did what I did in problem 1 & 2.
	I check if the next value is greater than the previous to detect if a "wrap around" has occured.
	n = 35 causes an overflow
______________________________
Problem 4
______________________________
  n =      34
  productLong: 2.95233e+38

  OVERFLOW
  n = 35 causes an overflow

  n =      40
  productLong: inf

  
5)	n = 171 causes an overflow 
______________________________
Problem 5
______________________________
  n =            170
  productDouble: 7.25742e+306

  OVERFLOW
  n = 171 causes an overflow

  n =            175
  productDouble: inf


6)	The expected value is 0 as the formula simplifies to:
	[[n*(1/n)]-1] = [(n/n)-1] = [(1)-1] = 0
	
	For using float numbers it appears to be accurate until n = 10
	For using double numbers it appears to be accurate until n = 6
	
	I suspect that this is due to the fact that when dividing floats or doubles the quotient is not going to be perfect but either rounded or truncated.
	Due to this over time the errors will add up and the function will be adding fractions that are ever so slightly more or less than its true mathmatical value.
	This can be seen by looking at the results:
		The float is adding fractions that are ever so slightly larger than the true mathematical fraction as the answer is a number barely over zero ([1 + small amounts] - 1 = (+) small amount).
		The double is adding fractions that are ever so slightly smaller than the true mathematical fraction as the answer is a number barely over zero ([1 - small amounts] - 1 = (-) small amount).

______________________________
Problem 6
______________________________
  n =           9
  1/n =         0.111111
  sumFracFloat: 0

  n =           10
  1/n =         0.1
  sumFracFloat: 1.19209e-07

  n =            5
  1/n =          0.2
  sumFracDouble: 0

  n =            6
  1/n =          0.166667
  sumFracDouble: -1.11022e-16


7)	Float values are not exact but have trailing decimal values which for this case meant the final increment was indeed < 4.4, but without the "setprecision" function showing the trailing decimal points the console would normally "visually-raound" the value to 4.4 when it was technically less than 4.4

______________________________
Problem 7
______________________________
float loop for i going from 3.4 to < 4.4
i = 3.400000095
i = 3.600000143
i = 3.800000191
i = 4
i = 4.199999809
i = 4.399999619


8)	The issue is the same as problem 7 (trailing decimal values) but the effect is that now the final increment is > to 4.4 and thus it does not display the simplified "visually-rounded" console output of 4.4
______________________________
Problem 8
______________________________
double loop for i going from 3.4 to < 4.4
i = 3.3999999999999999112
i = 3.6000000000000000888
i = 3.8000000000000002665
i = 4
i = 4.2000000000000001776
