Program test_stdPro;

Var 
  intVar: integer;
  realVar: real;
  a: array[-4..4, -4..4] Of real;
Begin
  {test readln}
  readln(intVar, realVar, a[-2, -3]);
  {test writeln}
  writeln(intVar);
  writeln(realVar);
  writeln(a[-2, -3]);
End.
