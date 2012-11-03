#pragma once
#include "mpir.h"

///////////// Dolgov Dmitry, 2012 ///////////////////////////

class __declspec(dllexport) IntGmp
{
public:
   ////////// Assignment Operators ///////////////////////////

	 IntGmp&  IntGmp::operator=(const mpz_t&);
	 IntGmp&  IntGmp::operator=(const IntGmp&);
	 IntGmp&  IntGmp::operator=(const long);


	 IntGmp operator +(const long);
	 IntGmp operator +(const mpz_t&);
	 IntGmp operator +(const IntGmp& );


	
	 IntGmp operator -(const long);
	 IntGmp operator -(const mpz_t&);
	 IntGmp operator -(const IntGmp&);
	 IntGmp operator -();

	 IntGmp operator *(const long);
	 IntGmp operator *(const mpz_t&);
	 IntGmp operator *(const IntGmp&);

	 IntGmp operator /(const long) ;
	 IntGmp operator /(const mpz_t&) ;
	 IntGmp operator /(const IntGmp&) ;

	 IntGmp operator %(const long) ;
	 IntGmp operator %(const mpz_t&) ;
	 IntGmp operator %(const IntGmp&) ;

	IntGmp operator >>(const long) ;
	IntGmp operator >>(const mpz_t&) ;
	IntGmp operator >>(const IntGmp&) ;

	IntGmp operator <<(const long) ;
	IntGmp operator <<(const mpz_t&) ;
	IntGmp operator <<(const IntGmp&) ;

	IntGmp operator ~() ; /////////// ?????????????///

	IntGmp operator++(); //перегрузка префиксного инкремента
    IntGmp operator++ (int); //перегрузка постфиксного инкремента

	IntGmp operator--(); //перегрузка префиксного декремента
    IntGmp operator-- (int); //перегрузка постфиксного декремента
	
	IntGmp operator &(const IntGmp&);
	IntGmp operator &(const long);
	IntGmp operator &(const mpz_t&);

	IntGmp operator ^(const long) ;
	IntGmp operator ^(const mpz_t&) ;
	IntGmp operator ^(const IntGmp&) ;

	IntGmp operator |(const IntGmp&);
	IntGmp operator |(const long);
	IntGmp operator |(const mpz_t&);

	IntGmp& operator &=(const IntGmp&);
	IntGmp& operator &=(const long);
	IntGmp& operator &=(const mpz_t&);

	IntGmp& operator |=(const IntGmp&);
	IntGmp& operator |=(const long);
	IntGmp& operator |=(const mpz_t&);

	IntGmp& operator ^=(const IntGmp&);
	IntGmp& operator ^=(const long);
	IntGmp& operator ^=(const mpz_t&);
	
	IntGmp& operator +=(const IntGmp&);
	IntGmp& operator +=(const long);
	IntGmp& operator +=(const mpz_t&);
	
	IntGmp& operator -=(const IntGmp&);
	IntGmp& operator -=(const long);
	IntGmp& operator -=(const mpz_t&);

	IntGmp& operator *=(const IntGmp&);
	IntGmp& operator *=(const long);
	IntGmp& operator *=(const mpz_t&);

	IntGmp& operator /=(const IntGmp&);
	IntGmp& operator /=(const long);
	IntGmp& operator /=(const mpz_t&);

	IntGmp& operator %=(const IntGmp&); 
	IntGmp& operator %=(const long);
	IntGmp& operator %=(const mpz_t&);

	IntGmp& operator >>=(const IntGmp&);
	IntGmp& operator >>=(const long);
	IntGmp& operator >>=(const mpz_t&);
	
	IntGmp& operator <<=(const IntGmp&);
	IntGmp& operator <<=(const long);
	IntGmp& operator <<=(const mpz_t&);

	//////// Compare operators ////////////////////
	bool operator ==(const IntGmp&);
	bool operator ==(const long);
	bool operator ==(const mpz_t&);

	bool operator <(const IntGmp&);
	bool operator <(const long);
	bool operator <(const mpz_t&);

	bool operator >(const IntGmp&);
	bool operator >(const long);
	bool operator >(const mpz_t&);
	
	bool operator <=(const IntGmp&);
	bool operator <=(const long);
	bool operator <=(const mpz_t&);

	bool operator >=(const IntGmp&);
	bool operator >=(const long);
	bool operator >=(const mpz_t&);

	bool operator !=(const IntGmp&);
	bool operator !=(const long);
	bool operator !=(const mpz_t&);
	////////   Functions //////////////////////////
	
	void setParam(const long param);
	void setParam(const mpz_t& param);
 
	IntGmp abs();
	IntGmp neg();
	
	IntGmp popcount();

	IntGmp hamdist(const long param);
	IntGmp hamdist(const mpz_t& param);
	IntGmp hamdist(const IntGmp& param);

	void setbit(const long param);
	void setbit(const mpz_t& param);
	void setbit(const IntGmp& param);

	void clearbit(const long param);
	void clearbit(const mpz_t& param);
	void clearbit(const IntGmp& param);

	IntGmp testbit(const long param);
	IntGmp testbit(const mpz_t& param);
	IntGmp testbit(const IntGmp& param);

	IntGmp pow(const long param);
	IntGmp pow(const mpz_t& param);
	IntGmp pow(const IntGmp& param);

	IntGmp powm(const IntGmp& param,const IntGmp& modfield);
	IntGmp powm(const long param,const long modfield);
	IntGmp powm(const mpz_t& param,const mpz_t& modfield);
	IntGmp powm(const long param, const mpz_t& modfield);
	IntGmp powm(const mpz_t& param,const long modfield);
	IntGmp powm(const long param,const IntGmp& modfield);
	IntGmp powm(const IntGmp& param,const long modfield);
	IntGmp powm(const IntGmp& param,const mpz_t& modfield);
	IntGmp powm(const mpz_t& param,const IntGmp& modfield);

	IntGmp invert(const mpz_t& param);
	IntGmp invert(const IntGmp& param);
	IntGmp invert(const long param);

	IntGmp gcd(const mpz_t& param);
	IntGmp gcd(const long param);
	IntGmp gcd(const IntGmp& param);

	IntGmp root(const long param);
	IntGmp root(const mpz_t& param);
	IntGmp root(const IntGmp& param);
	
	signed long getSLParam();
	unsigned long getULParam();
	mpz_t& getMpzParam();
	
	void Print(char * paramstr);
	void FromStr(char* str,int base);
	double ToDouble();
	char* ToString(int base,char* str=NULL);

	IntGmp(void);
	IntGmp(mpz_t& param);
	IntGmp(long param);	
	IntGmp(const IntGmp& rhs);// конструктор копии
	~IntGmp(void);


protected:
	mpz_t number;
};

class __declspec(dllexport) FloatGmp
{
public:
   ////////// Assignment Operators ///////////////////////////

	 FloatGmp&  FloatGmp::operator=(const mpf_t&);
	 FloatGmp&  FloatGmp::operator=(const FloatGmp&);
	 FloatGmp&  FloatGmp::operator=(const double);


	 FloatGmp operator +(const double);
	 FloatGmp operator +(const mpf_t&);
	 FloatGmp operator +(const FloatGmp& );
	
	 FloatGmp operator -(const double);
	 FloatGmp operator -(const mpf_t&);
	 FloatGmp operator -(const FloatGmp&);
	 FloatGmp operator -();

	 FloatGmp operator *(const double);
	 FloatGmp operator *(const mpf_t&);
	 FloatGmp operator *(const FloatGmp&);

	 FloatGmp operator /(const double) ;
	 FloatGmp operator /(const mpf_t&) ;
	 FloatGmp operator /(const FloatGmp&) ;
	 
	FloatGmp operator++(); //перегрузка префиксного инкремента
    FloatGmp operator++ (int); //перегрузка постфиксного инкремента

	FloatGmp operator--(); //перегрузка префиксного декремента
    FloatGmp operator-- (int); //перегрузка постфиксного декремента
	
	FloatGmp& operator +=(const FloatGmp&);
	FloatGmp& operator +=(const double);
	FloatGmp& operator +=(const mpf_t&);
	
	FloatGmp& operator -=(const FloatGmp&);
	FloatGmp& operator -=(const double);
	FloatGmp& operator -=(const mpf_t&);

	FloatGmp& operator *=(const FloatGmp&);
	FloatGmp& operator *=(const double);
	FloatGmp& operator *=(const mpf_t&);

	FloatGmp& operator /=(const FloatGmp&);
	FloatGmp& operator /=(const double);
	FloatGmp& operator /=(const mpf_t&);

	//////// Compare operators ////////////////////
	bool operator ==(const FloatGmp&);
	bool operator ==(const double);
	bool operator ==(const mpf_t&);

	bool operator <(const FloatGmp&);
	bool operator <(const double);
	bool operator <(const mpf_t&);

	bool operator >(const FloatGmp&);
	bool operator >(const double);
	bool operator >(const mpf_t&);
	
	bool operator <=(const FloatGmp&);
	bool operator <=(const double);
	bool operator <=(const mpf_t&);

	bool operator >=(const FloatGmp&);
	bool operator >=(const double);
	bool operator >=(const mpf_t&);

	bool operator !=(const FloatGmp&);
	bool operator !=(const double);
	bool operator !=(const mpf_t&);
	////////   Functions //////////////////////////
	
	void setParam(const double param);
	void setParam(const mpf_t& param);
 
	FloatGmp abs();
	FloatGmp neg();
		
	double getDParam();	
	mpf_t& getmpfParam();
	
	void Print(char * paramstr);

	FloatGmp(void);
	FloatGmp(mpf_t& param);
	FloatGmp(double param);	
	FloatGmp(const FloatGmp& rhs);// конструктор копии
	~FloatGmp(void);


protected:
	mpf_t number;
};

class __declspec(dllexport) RealGmp
{
public:
   ////////// Assignment Operators ///////////////////////////

	 RealGmp&  RealGmp::operator=(const mpq_t&);
	 RealGmp&  RealGmp::operator=(const RealGmp&);
	 RealGmp&  RealGmp::operator=(const double);


	 RealGmp operator +(const double);
	 RealGmp operator +(const mpq_t&);
	 RealGmp operator +(const RealGmp& );
	
	 RealGmp operator -(const double);
	 RealGmp operator -(const mpq_t&);
	 RealGmp operator -(const RealGmp&);
	 RealGmp operator -();

	 RealGmp operator *(const double);
	 RealGmp operator *(const mpq_t&);
	 RealGmp operator *(const RealGmp&);

	 RealGmp operator /(const double) ;
	 RealGmp operator /(const mpq_t&) ;
	 RealGmp operator /(const RealGmp&) ;
	 
	RealGmp operator++(); //перегрузка префиксного инкремента
    RealGmp operator++ (int); //перегрузка постфиксного инкремента

	RealGmp operator--(); //перегрузка префиксного декремента
    RealGmp operator-- (int); //перегрузка постфиксного декремента
	
	RealGmp& operator +=(const RealGmp&);
	RealGmp& operator +=(const double);
	RealGmp& operator +=(const mpq_t&);
	
	RealGmp& operator -=(const RealGmp&);
	RealGmp& operator -=(const double);
	RealGmp& operator -=(const mpq_t&);

	RealGmp& operator *=(const RealGmp&);
	RealGmp& operator *=(const double);
	RealGmp& operator *=(const mpq_t&);

	RealGmp& operator /=(const RealGmp&);
	RealGmp& operator /=(const double);
	RealGmp& operator /=(const mpq_t&);

	//////// Compare operators ////////////////////
	bool operator ==(const RealGmp&);
	bool operator ==(const double);
	bool operator ==(const mpq_t&);

	bool operator <(const RealGmp&);
	bool operator <(const double);
	bool operator <(const mpq_t&);

	bool operator >(const RealGmp&);
	bool operator >(const double);
	bool operator >(const mpq_t&);
	
	bool operator <=(const RealGmp&);
	bool operator <=(const double);
	bool operator <=(const mpq_t&);

	bool operator >=(const RealGmp&);
	bool operator >=(const double);
	bool operator >=(const mpq_t&);

	bool operator !=(const RealGmp&);
	bool operator !=(const double);
	bool operator !=(const mpq_t&);
	////////   Functions //////////////////////////
	
	void setParam(const double param);
	void setParam(const mpq_t& param);
	void setUParam(const unsigned long,const unsigned long);
	void setSParam(const signed long,const signed long);
 
	RealGmp abs();
	RealGmp neg();

	IntGmp getNumerator();
	IntGmp getDenominator();
	
	double getDParam();	
	mpq_t& getmpqParam();
	
	void Print(char * paramstr);

	RealGmp(void);
	RealGmp(mpq_t& param);
	RealGmp(double param);	
	RealGmp(const RealGmp& rhs);// конструктор копии
	~RealGmp(void);


protected:
	mpq_t number;
};

class __declspec(dllexport) GmpRand{
public:
	GmpRand();
	~GmpRand();

	IntGmp Rand(char  method,IntGmp& countfield,int loop);
	IntGmp Rand(char  method,IntGmp& countfield);
	// method - способ генерации, countfield- величина диапозона чисел. т.е макс граница

	IntGmp LinearKongruent(IntGmp& countfield);
	IntGmp FibonacciLate  (IntGmp& countfield,int loop);
	IntGmp MersenneTwister(IntGmp& countfield);

protected:
	IntGmp *fibarr;// fibonacchi array
	int fibk,fibj;// fibonacci array indexes
	bool bfibar; // fibonacchi array is initialized? ; 
	gmp_randstate_t statemt;
};