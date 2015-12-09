class X {
	int i;
	public:
	X(int ii = 0);
	void modify();
};

X::X(int ii)
{
	i = ii;
}

void X::modify()
{
	i++;
}

X f5()
{
	return X();
}
 const X f6()
{
	return X();
}

void f7(X& x)
{
	x.modify();
}


int main()
{
	f5() = X(1);
	f5().modify();
	// invalid initialization of non-const reference of type ‘X&’ from an rvalue of type ‘X’
	// f7(f5());
	// error: passing ‘const X’ as ‘this’ argument of ‘X& X::operator=(const X&)’ discards
	// qualifiers [-fpermissive]
	//  f6() = X(1);
	// error: passing ‘const X’ as ‘this’ argument of ‘void X::modify()’ discards qualifiers [-fpermissive]
	// f6().modify();
	//error: in passing argument 1 of ‘void f7(X&)’
	//	    void f7(X& x)
	//      f7(f6());

}
