program HelloWorld;
const a=30;
const b=20;
var c:integer;

function testfun(n:integer):integer;
begin
    if n>2 then testfun:=testfun(n-1)+testfun(n-2)
    else testfun:=1;
end;

procedure testpro(arg1:integer);
begin
    writeln(2);
end;

begin
    {for c:=1 to 10 do d:=1;}
    c:=testfun(10);
    writeln(c);
end.
