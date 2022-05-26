program test_calculate;

const conInt = 27;
const conReal = 3.14;

Var
  varInt1, varInt2 : integer;
  varReal1, varReal2 , divResult: real;
  varBool1, varBool2 : boolean;

begin
  varInt1 := conInt * conInt;
  varInt2 := conInt + conInt;
  varReal1 := conReal * varInt1;
  varReal2 := conReal * varInt2;
  divResult := ((varInt1 + conReal) * conReal) / ((varInt2 / varReal1) - varReal2);
  writeln(varInt1);
  writeln(varInt2);
  writeln(varReal1);
  writeln(varReal2);
  writeln(divResult);
end.