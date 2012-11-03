The Long Arithmetic Classes.
There are IntGmp, FloatGmp, RealGmp and GmpRand.  All of those are wrapper of C library MPIR.
MPIR is ported Linux library called GMP. GMP has C++ classes logic implementation
of all methods at GMP C functios and structs. 

Descriptions.
IngGmp represents Longest int type.
IntGmp has all common operations, functions that you need.
All operations can calculate with long parameter, IngGmp exemplar and mpz_t struct.
Arithmetic operations: +,-,/,*,=,%,>>,<<,~,++,--,&,|,^,&=,|=,^=,+=,-=,/=,*=,%=,<<=,>>=
Logic operations: ==,!=,>,<,<=,>=
Functions:
- getMpzParam() return included mpz parameter of wrapper class.
- getSLParam()  returns converted includede mpz parameter at signed long
- getULParam()  returns converted includede mpz parameter at unsigned long
- invert(Field) returns included inverted parameter at close Field
- setParam(param) is like = operation
- abs() returns absolute value
- neg() returns negative value
- popcount(op) If op > 0, return the population count of op, which is the number of 1 bits in the binary
representation. If op < 0, the number of 1s is infinite, and the return value is the largest
possible IntGmp.
- hamdist(param) returns Hammer distanations of included parameter in binary representation
- setbit(param)  set the param bit at 1
- clearbit(param) set the param bit to 0
- testbit(param) returns bit param index in included value and return 0 or 1 accordingly.
- pow(param) returns included parameter in param degree
- powm(param,Field) returns included parameter in param degree by mod Field
- gcd(number) returns the greatest common divisor of included parameter  and  number
- root(root_degree) returns the pow(-root_degree) in IngGmp format
- Print(param) prints included value in param format
- FromStr(str,base) sets included value from str in base
- ToDouble()
- toString(number_base)

FloatGmp represents Longest float type.
FloatGmp has all common operations, functions that you need.
All operations can calculate with long parameter, Float exemplar and mpf_t struct.
Arithmetic operations: +,-,/,*,=,++,--,+=,-=,/=,*=
Logic operations: ==,!=,>,<,<=,>=
Functions:
- getmpfParam() return included mpf parameter of wrapper class.
- setParam(param) is like = operation
- abs() returns absolute value
- neg() returns negative value
- getDParam() returns double representation
- Print(format)

RealGmp represents Longest double type.
RealGmp has all common operations, functions that you need.
All operations can calculate with long parameter, Real exemplar and mpq_t struct.
Arithmetic operations: +,-,/,*,=,++,--,+=,-=,/=,*=
Logic operations: ==,!=,>,<,<=,>=
Functions:
- setParam(param) is like = operation
- abs() returns absolute value
- neg() returns negative value
- getNumerator() returns numerator at IntGmp
- getDenominator() returns denominator at IntGmp
- getDParam() returns double representation
- getmpqParam() returns included value
- Print(format)

GmpRand is class which included common logic to generate probabilitic numbers

- Rand(method, count) - returns generates number by method; number <=count; 
- Rand(method, count,loop) - returns generates number by method at loop LOOP; number <=count; 
and some specific random methods:
- LinearKongruent(count)
- FibonacciLate(count)
- MersenneTwister(count)