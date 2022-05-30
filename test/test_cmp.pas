Program test_cmp;

Var 
  int1,int2: integer;
  real1,real2: real;
Begin
  int1 := 5;
  int2 := 6;
  writeln(int1=int2);
  writeln(int1<int2);
  writeln(int1<=int2);
  writeln(int1<=int1);
  writeln(int1>=int2);
  writeln(int2>=int2);
  writeln(int1>int2);

  real1 := 3.141592;
  real2 := real1-1;
  writeln(real1=real2);
  writeln(real1<real2);
  writeln(real1<=real2);
  writeln(real1<=real1);
  writeln(real1>=real2);
  writeln(real2>=real2);
  writeln(real1>real2);

  writeln(int1=real2);
  writeln(int1<real2);
  writeln(int1<=real2);
  writeln(int1<=real1);
  writeln(int1>=real2);
  writeln(int2>=real2);
  writeln(int1>real2);
End.
