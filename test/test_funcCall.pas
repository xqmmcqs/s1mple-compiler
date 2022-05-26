program test_funcCall;

function testFunc1(intVarTem:integer):integer;
begin
  writeln(intVarTem+1);
end;

function testFunc2:integer;
begin
  writeln(3.14159);
end;

procedure testPro1(intVarTem:integer);
begin
    writeln(intVarTem-1);
end;

procedure testPro2;
begin
    writeln(114514);
end;

begin
  testFunc1(2022);
  testFunc2;
  testPro1(2022);
  testPro2;
end.