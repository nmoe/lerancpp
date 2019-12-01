#include <iostream>
class Complex
{
private:
	float real;
	float img;
public:
	Complex()
	{
		real = 0;
		img = 0;
	}
	Complex(float r, float i)
	{
		real = r;
		img = i;
	}
	Complex operator+(Complex t);
	Complex operator-(Complex t);
	Complex operator*(Complex t);
	Complex operator/(Complex t);
	Complex operator++(int);
	Complex operator++();
	Complex operator--(int);
	Complex operator--();
	void out();
	};

	Complex Complex::operator+(Complex t)
	{
    Complex n;
		n.real = real + t.real;
		n.img = img + t.img;
		return n;
	}

	Complex Complex::operator-(Complex t)
	{
		Complex k;
		k.real = real - t.real;
		k.img = img - t.img;
		return k;
	}
	Complex Complex::operator*(Complex t)
	{
		Complex j;
		j.real = real * t.real + img * t.img;
		j.img = real * t.img - t.real * img;
		return j;
	}

	Complex Complex::operator/(Complex t)
	{
		Complex h;
		h.real = (real * t.real + img * t.img) / (t.real * t.real + t.img * t.img);
		h.img = (img * t.real - real * t.img) / (t.real * t.real + t.img * t.img);
		return h;
	}

  Complex Complex::operator++(int)
  { 
	  Complex t(*this);
    t.real++;
    t.img++;
    return t;
  }

	Complex Complex::operator++()
	{
		Complex t(*this);
		++t.real;
		++t.img;
		return t;
	}

	Complex Complex::operator--(int)
  { 
	  Complex t(*this);
    t.real--;
    t.img--;
    return t;
  }

	Complex Complex::operator--()
	{
		Complex t(*this);
		--t.real;
		--t.img;
		return t;
	}

	void Complex::out()
	{
		if(img > 0)
			std::cout << real << " + " << img << "i" << std::endl;
		else 
			std::cout << real << img << "i" << std::endl;
		}
	
int main()
{
  Complex t1(4,5);
	Complex t2(3,3);
	Complex t3;
	Complex t4;
	Complex t5;
	Complex t6;
	Complex t7;
	Complex t8;
	Complex t9;
	Complex t10;
	
	t3 = t2 + t1;
	t4 = t2 - t1;
	t5 = t1 * t2;
	t6 = (t1 / t2);
	t7 = t1++;   
	t8 = ++t1;
	t9 = t1--;
	t10 = --t1;
	std::cout<< " t1 = ";
	t1.out();
	std::cout<< " t2 = ";
	t2.out();
	std::cout<< " t2 + t1 = ";
	t3.out();
	std::cout<< " t2 - t1 = ";
	t4.out();
	std::cout<< " t1 * t2 = ";
	t5.out();
	std::cout<< " t1 / t2 = ";
	t6.out();
	std::cout<< " t1++ = ";
	t7.out();
	std::cout<< " ++t1 = ";
	t8.out();
	std::cout<< " t1-- = ";
	t9.out();
	std::cout<< " --t1 = ";
	t10.out();
	
	return 0;
  }
