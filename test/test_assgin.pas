program test_assign;

const conInt = 27;
const conReal = 3.14;

Var
  varInt1, varInt2 : integer;
  varReal1, varReal2 : real;
  a: array[-4..4, -4..4] Of real;

begin
  varInt1 := conInt * conInt;
  varInt2 := 2 * conInt;
  varReal1 := conReal * varInt1;
  varReal2 := conReal * varInt2;
  a[-3, -2] := varReal1 * varReal2;
  writeln(varInt1);
  writeln(varInt2);
  writeln(varReal1);
  writeln(varReal2);
  writeln(a[-3, -2]);
end.