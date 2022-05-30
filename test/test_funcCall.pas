Program test_funcCall;

Function testFunc1(intVarTem:integer): integer;
Begin
  writeln(intVarTem+1);
End;

Function testFunc2: integer;
Begin
  writeln(3.14159);
End;

Procedure testPro1(intVarTem:integer);
Begin
  writeln(intVarTem-1);
End;

Procedure testPro2;
Begin
  writeln(114514);
End;

Begin
  testFunc1(2022);
  testFunc2;
  testPro1(2022);
  testPro2;
End.
